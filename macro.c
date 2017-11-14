#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void GETLINE();
void PROCESSLINE();
void EXPAND();
void DEFINE();
FILE *input; //INPUT FILE POINTER
FILE *output; //OUTPUT FILE POINTER

char label[10],opcode[10],operand[25];
char line[20];
int namcount=0, defcount=0;
int EXPANDING;
int flag;

struct inputcode
{
	char name[10];
	int start,end;
}myinputcode[15];
 
struct definetab
{
	char macroline[25];
}mydefinetab[25];
 
struct argumenttab
{
	char arg[3][9];
}myargumenttab;
 
/*Main function*/
void main()
{
	EXPANDING=0;
	input =fopen("input.txt","r");                         
	output=fopen("output.txt","w");
	GETLINE();
	while(strcmp(opcode,"END")!=0)
	{ 
		PROCESSLINE();
		GETLINE();
	}
	fprintf(output,"%s",line);
	printf("\nOutput file has been successfully created.\n");
}
 
/* GETLINE FUNCTION */
void GETLINE()
{   
	char word1[10],word2[10],word3[10],buff[10];
	int count=0,i,j=0;
	if(EXPANDING)
		strcpy(line,mydefinetab[flag++].macroline);
	else
		fgets(line,20,input);

	opcode[0]='\0';label[0]='\0';operand[0]='\0';word1[0]='\0';word2[0]='\0';word3[0]='\0';

	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]!=' ')
			buff[j++]=line[i];
		else
		{
			buff[j]='\0';
			strcpy(word3,word2);
			strcpy(word2,word1);
			strcpy(word1,buff);
			j=0;
			count++;
		}
	}

	buff[j-1]='\0';
	strcpy(word3,word2);
	strcpy(word2,word1);
	strcpy(word1,buff);

	switch(count)
	{
		case 0:strcpy(opcode,word1);break;
		case 1:{strcpy(opcode,word2);strcpy(operand,word1);}break;
		case 2:{strcpy(label,word3);strcpy(opcode,word2);strcpy(operand,word1);}break;
	}
}
 
/* PROCESSLINE Function */
void PROCESSLINE()
{
	int i;
	for(i=0;i<namcount;i++)
	if(!strcmp(opcode,myinputcode[i].name))
	{
		EXPAND();
		return;
	}
	if(!strcmp(opcode,"MACRO"))
		DEFINE();
	else
		fprintf(output,"%s",line);
}
 
/* Define Fucntion */  
void DEFINE()
{
	int LEVEL,i=0,j=0,k=0;
	char param[5][9];
	char s[3];
	strcpy(s,"123");
	strcpy(myinputcode[namcount].name,label);
	myinputcode[namcount].start=defcount;
	strcpy(mydefinetab[defcount].macroline,line);
	while(operand[i]!='\0')
	{
		if(operand[i]!=',')
			param[j][k++]=operand[i];
		else
		{
			param[j++][k]='\0';
			k=0;
		}
		i++;
	}
	param[j][k]='\0';
	LEVEL=1;
	while(LEVEL>0)
	{
		GETLINE();
		if(operand[0]!='\0')
		{
			for(i=0;i<3;i++)
			{
				if(!strcmp(operand,param[i]))
				{
					operand[0]='?';
					operand[1]=s[i];
					operand[2]='\0';
				}
			}
		}
		if(!strcmp(opcode,"MACRO"))
			LEVEL++;
		else if(!strcmp(opcode,"MEND"))
			LEVEL--;

		strcpy(mydefinetab[defcount].macroline,opcode);
		if(operand[0]!='\0')
		{
			strcat(mydefinetab[defcount].macroline," ");
			strcat(mydefinetab[defcount].macroline,operand);
			strcat(mydefinetab[defcount].macroline,"\n");
		}
		strcat(mydefinetab[defcount++].macroline,"\n");
	}
	myinputcode[namcount++].end=defcount;
}
 
/*Expand Function */
void EXPAND()
{
	int i,end=0,j=0,k=0;
	EXPANDING=1;
	int arg=0;
	fprintf(output,"//%s",line);
	for(i=0;i<namcount;i++)
	{
		if(!strcmp(opcode,myinputcode[i].name))
		{
			flag=myinputcode[i].start;
			end=myinputcode[i].end;
			while(operand[i]!='\0')
			{
				if(operand[i]!=',')
					myargumenttab.arg[j][k++]=operand[i];
				else
				{
					myargumenttab.arg[j++][k]='\n';
					k=0;
				}
				i++;
			}                             
			myargumenttab.arg[j][k]='\n';               
		}
	}
	while(flag<(end-1))
	{
		GETLINE();
		if(operand[0]=='?')
			strcpy(operand,myargumenttab.arg[operand[1]-'0'-1]);
			fprintf(output,"%s %s %s",label,opcode,operand);
	}
	EXPANDING=0;
}
