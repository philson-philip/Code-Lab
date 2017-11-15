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
/////////////////////////////////////////////////////////////////////////bubble sort
	int m;
	struct process temp;
	for(m=0;m<n;m++)
	{
		for(i=0;i<n-1;i++)
		{
			if(p[i].bt >p[i+1].bt)
			{
				temp=p[i];
				p[i]=p[i+1];
				p[i+1]=temp;
			}
		}
	}
	printf("   pno   at   bt \n"  );
	for(i=0;i<n;i++)
	{
		printf("%5d%5d%5d",p[i].pno,p[i].at,p[i].bt);
		printf("\n");
	}
/////////////////////////////////////////////////////////////////////////calculation of ct
	
	p[0].ct=p[0].at+p[0].bt;
	for(i=0;i<n;i++)
	{
		p[i+1].ct=p[i].ct+p[i+1].bt;
	}
	printf("   pno   at   bt   ct \n"  );
	for(i=0;i<n;i++)
	{
		printf("%5d%5d%5d%5d",p[i].pno,p[i].at,p[i].bt,p[i].ct);
		printf("\n");
	}

////////////////////////////////////////////////////////////////////////calculation of tat 
	for(i=0;i<n;i++)
	{
		p[i].tat=p[i].ct-p[i].at;
	}
	printf("   pno   at   bt   ct  tat  \n"  );
	for(i=0;i<n;i++)
	{
		printf("%5d%5d%5d%5d%5d",p[i].pno,p[i].at,p[i].bt,p[i].ct,p[i].tat);
		printf("\n");
	}

////////////////////////////////////////////////////////////////////////calculation of wt
	
	for(i=0;i<n;i++)
	{
		p[i].wt=p[i].tat-p[i].bt;
	}
	printf("   pno   at   bt   ct  tat  wt  \n");
	for(i=0;i<n;i++)
	{
		printf("%5d%5d%5d%5d%5d%5d",p[i].pno,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt);
		printf("\n");
	}

////////////////////////////////////////////////////////////////////////calculation of avg wt
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+p[i].wt;
	}
	sum=sum/n;
	printf("awt");
	printf("%5d",sum);
	printf("\n");
////////////////////////////////////////////////////////////////////////calculation of avg tat
	int sumt=0;
	for(i=0;i<n;i++)
	{
		sumt=sumt+p[i].tat;
	}
	sumt=sumt/n;
	printf(" average tat");
	printf("%5d",sumt);
	printf("\n");
}		

