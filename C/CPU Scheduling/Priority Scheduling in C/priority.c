
#include<stdio.h>

struct process
{
	int pno,at,bt,ct,tat,wt,pr;
}p[10],temp;

void main()
{
	int i,j,n,avgt;
	printf("\nEnter the number of processes");
	scanf("%d",&n);

	//Entering the process data
	for(i=0;i<n;i++)
	{
		printf("\nEnter the process number:");
		scanf("%d",&p[i].pno);
		printf("\nEnter the arrival time:");
		scanf("%d",&p[i].at);
		printf("\nEnter the burst time:");
		scanf("%d",&p[i].bt);
		printf("\nEnter the priority:");
		scanf("%d",&p[i].pr);

	}

	//Displaying the process details
	printf("  PNO    AT    BT   Priority   \n");
	for(i=0;i<n;i++)
	{
		printf("%5d%5d%5d%5d",p[i].pno,p[i].at,p[i].bt,p[i].pr);
		printf("\n");

	}

	//Sorting the burst time
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(p[j].pr>p[j+1].pr)
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}

	//Displaying the sorted order
	printf("  PNO    AT    BT   Priority   \n");
	for(i=0;i<n;i++)
	{
		printf("%5d%5d%5d%5d",p[i].pno,p[i].at,p[i].bt,p[i].pr);
		printf("\n");

	}

	//Calculating the completion time
	p[0].ct=p[0].bt;
	//p[1].ct=p[0].bt+p[1].bt;
	for(i=1;i<n;i++)
	{
		p[i].ct=p[i-1].ct+p[i].bt;

	}


	//Calculating turnaroud time
	for(i=0;i<n;i++)
	{
		p[i].tat=p[i].ct-p[i].at;
	}

	//Calculating the waiting time
	p[0].wt=0;
	for(i=0;i<n;i++)
	{
		p[i].wt=p[i].tat-p[i].bt;
	}


	//displaying the completion time
	printf("  PNO    AT   BT   Priority   CT   TAT   WT  \n");
	for(i=0;i<n;i++)
	{
		printf("%5d%5d%5d%5d%5d%5d%5d",p[i].pno,p[i].at,p[i].bt,p[i].pr,p[i].ct,p[i].tat,p[i].wt);
		printf("\n");

	}












}
