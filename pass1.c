#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	char OPTAB[20][2],SYMTAB[20][2],addr;
	fp1 = fopen("input.txt","r");
	fscanf(fp1,"%s",&addr);
	fp2 = fopen("output.txt","w");
	fprintf(fp2,"%s",&addr);	
}
