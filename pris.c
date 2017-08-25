#include<stdio.h>
struct process
{
	int pno,at,bt,pp,ct,tat,wt;
}p[10];

void main()
{
	int i;
	int n;
	printf("\nEnter the number of processes:  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("Enter the value of process: ");
		scanf("%d",&p[i].pno);
		printf("Enter the value of arival time: ");
		scanf("%d",&p[i].at);
		printf("Enter the value of burst time: ");
		scanf("%d",&p[i].bt);
		printf("Enter the value of  priority: ");
		scanf("%d",&p[i].pp);
		printf("\n");
	}
	printf("   pno   at   bt  pp \n"  );
	for(i=0;i<n;i++)
	{
		printf("%5d%5d%5d",p[i].pno,p[i].at,p[i].bt,p[i].pp);
		printf("\n");
	}
/////////////////////////////////////////////////////////////////////////bubble sort
	int m;
	struct process temp;
	for(m=0;m<n;m++)
	{
		for(i=0;i<n-1;i++)
		{
			if(p[i].pp >p[i+1].pp)
			{
				temp=p[i];
				p[i]=p[i+1];
				p[i+1]=temp;
			}
		}
	}
	printf("   pno   at   bt   pp \n"  );
	for(i=0;i<n;i++)
	{
		printf("%5d%5d%5d%5d",p[i].pno,p[i].at,p[i].bt,p[i].pp);
		printf("\n");
	}
}
