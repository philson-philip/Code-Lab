#include<stdio.h>
#include<stdlib.h>

void main()
{
    int head,cyl,p,i,temp,seek=0,j,max,loc,loc1;
	int arr[100];

	//Entering the initial head position and the number od cylinders
	printf("\nEnter the initial head position:");
	scanf("%d",&head);
	printf("\nEnter the total number of cylinders:");
	scanf("%d",&cyl);

	//Enter the total number of requests

	printf("\nEnter the total number of requests:");
	scanf("%d",&p);

	for(i=0;i<p;i++)
	{
		scanf("%d",&temp);
		printf("\n");
		//temp=arr[i];
		if(temp>cyl)
			{
				printf("\nValue not accepted");
				i--;
				//break;

			}
		else
			{
				arr[i]=temp;
			}
	}
	printf("\n");

    //Displaying the process order

	printf("\nThe process order is:");
	for(i=0;i<p+3;i++)
	{

		printf("%5d",arr[i]);
		arr[p]=0;
		arr[p+1]=head;
		arr[p+2]=cyl-1;
	}
	p=i;

    //sorting the process order

	for(i=0;i<p;i++)
	{
		for(j=0;j<p-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	//displaying the sorted process order
	printf("\nThe sorted process order is:");
	for(i=0;i<p;i++)
	{
		printf("%5d",arr[i]);
	}

	//carrying out CSCAN
	printf("\nCarrying out CSCAN\n");
	for(i=0;i<p;i++)
    {
        if(head==arr[i])
        {
            loc=i;
            break;

        }

    }
    //scanning towards the left
    loc1=p-1;
    for(j=loc;j>=0;j--)
    {
        printf("%5d",arr[j]);
    }
    //printf("%5d",cyl-1);

    //scanning towards the right
    for(j=loc1;j>loc;j--)
    {
        printf("%5d",arr[j]);
    }

    //Calculating the seek time
	for(i=0;i<p;i++)
	{
		seek=seek+abs(head-arr[i]);
		head=arr[i];
	}

	printf("\nSeek time is: %d",seek);
	printf("\n");

	//Average seek time
	printf("\nAverage seek time:%d",seek/p);
	printf("\n");


}
