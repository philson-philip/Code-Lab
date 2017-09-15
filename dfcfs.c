#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	int nc,np,ipos,i,P[10],j,seek[10],seekt,tseek;//nc=no of cylinders np=no of process ipos=initial head pos
	printf("\nEnter The Total Number of CYLINDERS\t:");
	scanf("%d",&nc);
	printf("\nEnter The Total Number of PROCESS\t:");
        scanf("%d",&np);
	printf("\nEnter The INITIAL HEAD POSITION\t:");
        scanf("%d",&ipos);
	for(i=0;i<np;i++)
	{
		printf("\nEnter Process Number P[%d]\t:",i);
        	scanf("%d",&P[i]);
	}
	printf("\n\nDisplaying All the Process Number in  Order\n");
	for(i=0;i<np;i++)
        { 
                printf("\t%d",P[i]);
        }
	printf("\n");
	//CALCULATING SEEK TIME
	seek[0]=P[0]-ipos;//Calculating Initial Seek Time
	if(seek[0] < 0)
	{
		seek[0]=seek[0]*-1;
	}
	printf("\nSeek Time of \t%d - %d:\t%d",ipos,P[0],seek[0]);
	tseek=seek[0];
	for(j=1;j<np;j++)
	{
		seek[j]=P[j]-P[j-1];
		if(seek[j]<0)
		{
			seek[j]=seek[j]*-1;
		}
		tseek=tseek+seek[j];
	}
	//PRINTING SEEK TIME
	for(j=1;j<np;j++)
        {
                printf("\nSeek Time of \t%d - %d:\t%d",P[j-1],P[j],seek[j]);
        }
	//AVG SEEK TIME
	int avgseek;
	avgseek=tseek/np;
	printf("\n\nAVERAGE SEEK TIME\t:\t%d\n",avgseek);
}
