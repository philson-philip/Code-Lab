#include<stdio.h>
struct process
{
	int pno,at,bt,ct,tat,wt;
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
		printf("\n");
	}
	printf("   pno   at   bt \n"  );
	for(i=0;i<n;i++)
	{
		printf("%5d%5d%5d",p[i].pno,p[i].at,p[i].bt);
		printf("\n");
	}
	int time_limit;
	printf("\n Time limit is : ");
	scanf("%d",&time_limit);
}
