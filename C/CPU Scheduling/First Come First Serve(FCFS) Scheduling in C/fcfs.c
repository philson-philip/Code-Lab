#include<stdio.h>
struct fcfs{
	int pno;//Process Num
	int at;//Arrival Time
	int bt;//Burst Time
	int tat;//Turn Arround Time
	int wt;//Waiting time
};
void main()
{	int p; //Total Number of Process 
	printf("Enter the number of Process:");
	scanf("%d",&p);
	
	struct fcfs s[p],temp; //Structure Key

	//Entering the Input
	int i;
	for(i=0;i<p;i++)
	{
		printf("\nEnter the PROCESS ID of Process [%d]:",i+1);
		scanf("%d",&s[i].pno);
		printf("\nEnter the ARRIVAL TIME:");
                scanf("%d",&s[i].at);
		printf("\nEnter the BURST TIME:");
                scanf("%d",&s[i].bt);
	}
	//Displaying the Chart
	int j;
	printf("\n\t\t    TABLE\t\n");
	printf("\t\t    ******\n");
	printf("\t\tPNO\tAT\tBT\n");

	for(j=0;j<p;j++)
	{
		printf("\t\t%d\t",s[j].pno);
                printf("%d\t",s[j].at);
                printf("%d\n",s[j].bt);
	}
	//Sorting
	for(j=0;j<p-1;j++)
	{
		for(i=0;i<p-1;i++)
		{
			if(s[i].at>s[i+1].at)
			{
				temp=s[i];
				s[i]=s[i+1];
				s[i+1]=temp;
			}
			else if(s[i].at==s[i+1].at)
			{
				if(s[i].pno>s[i+1].pno)
				{
					temp=s[i];
					s[i]=s[i+1];
					s[i+1]=temp;
				}
			}
		}
	}
	printf("\n\n\tSORTING ACCORDING TO THE ARRIVAL TIME\n");
	//Sorted Display
	printf("\n\t\t    TABLE\t\n");
        printf("\t\t    ******\n");
        printf("\t\tPNO\tAT\tBT\n");

        for(j=0;j<p;j++)
        {
                printf("\t\t%d\t",s[j].pno);
                printf("%d\t",s[j].at);
                printf("%d\n",s[j].bt);
        }
	//Calculating TAT ,CT and WT
	int ct=0;//Completion Time
	for(i=0;i<p;i++)
	{
		ct+=s[i].bt;
		s[i].tat=ct-s[i].at;
		s[i].wt=s[i].tat-s[i].bt;
	}
	//Displaying After Calculation
	printf("\n\n\tCALCULATING 'TAT' AND 'WT'\n");
	printf("\n\n\n\t\t   TABLE\t\n");
        printf("\t\t     ******\n");
        printf("\t\tPNO\tAT\tBT\tTAT\tWT\n");

        for(j=0;j<p;j++)
        {
                printf("\t\t%d\t",s[j].pno);
                printf("%d\t",s[j].at);
                printf("%d\t",s[j].bt);
		printf("%d\t",s[j].tat);
		printf("%d\n",s[j].wt);
        }
	//Printing Gantt Chart
	printf("\n\n\n\t\t   GANTT CHART\t\n");
        printf("\t\t  ***********\n");
	ct=0;
	printf("  ");
        for(j=0;j<p;j++)
        {
                printf("\tP[%d]",j+1);
	}
	printf("\n\t%d",ct);
	for(j=0;j<p;j++)
	{
		ct+=s[j].bt;
		printf("\t%d",ct);
	}
	printf("\n");
}

