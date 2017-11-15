#include<stdio.h>
void main()
{
	int P[5];
	//HARD CODING THE VALUES MATRIX
	int Alloc[5][3]={0,1,0,2,0,0,3,0,2,2,1,1,0,0,2};
	int Max[5][3]={7,5,3,3,2,2,9,0,2,2,2,2,4,3,3};
	int Avail[1][3]={3,3,2};
	int Need[5][3];
	int i=0,r=0,c=0,j=0,finish[5]={0,0,0,0,0},flag=5; 
	//CALCULATION OF NEED MATRIX
	for(r=0;r<5;r++)
	{
		for(c=0;c<3;c++)
		{
			Need[r][c] = Max[r][c] - Alloc[r][c];
		}
	}
	//PRINTING OF NEED MATRIX
	printf("\n\tTHE NEED MATRIX IS:\n\t");
	for(r=0;r<5;r++)
        { 
                for(c=0;c<3;c++)
                { 
                        printf("%d\t",Need[r][c]);
                }
		printf("\n\t");
        }
	//SCHEDULING THE PROCESS
	for(r=0;r<5;r++)
	{
			if((Avail[0][0]>Need[r][0]) && (Avail[0][1]>Need[r][1]) && (Avail[0][2]>Need[r][2]))
			{
				finish[r]=1;
				P[i++]=r;
				flag--;
				Avail[0][0]=Avail[0][0]+Alloc[r][0];
				Avail[0][1]=Avail[0][1]+Alloc[r][1];
				Avail[0][2]=Avail[0][2]+Alloc[r][2];
			}
	}
	while(flag>0)
	{
		for(r=0;r<5;r++)
		{
			if(finish[r]!=0)
			{
				if((Avail[0][0]>Need[r][0]) && (Avail[0][1]>Need[r][1]) && (Avail[0][2]>Need[r][2]))
                        	{
                                	finish[r]=1;
                               		P[i++]=r;
                                	flag--;
                                	Avail[0][0]=Avail[0][0]+Alloc[r][0];
                                	Avail[0][1]=Avail[0][1]+Alloc[r][1];
                                	Avail[0][2]=Avail[0][2]+Alloc[r][2];
                        	}
			}
		}
	}
	//PRINTING THE SCHEDULED ORDER OF THE PROCESS
	printf("\n\nPRINTING THE ORDER OF THE SCHEDULING OF THE PROCESS\n");
	for(i=0;i<5;i++)
	{
		printf("\tP[%d]",P[i]);
	}
	printf("\n\n");
}
