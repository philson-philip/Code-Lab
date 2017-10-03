#include<stdio.h>
#include<stdlib.h>

int mutex=1,empty=5,full=0,x=0;

void main()
{
	int n;
	void producer();
	void consumer();
	int wait(int);
	int signal(int);
	while(1)
	{
		printf("\nEnter your choice:\n\t1.Producer\n\t2.Consumer\n\t3.Exit\n\t\t:");
		scanf("%d",&n);
		if(n==1)
		{
			if((mutex==1)&&(empty!=0))
				producer();
			else
				printf("\n\tBUFFER IS FULL!!!!!!");
		}	
		else if(n==2)
		{
			if((mutex==1)&&(full!=0))
				consumer();
			else
				printf("\n\tBUFFER IS EMPTY!!!!!");
		}
		else if(n==3)
		{
			exit(0);
			break;
		}
		else
			printf("\n\tEnter a number between 1-3");
	}	
}
int wait(int s)
{	
	return(--s);
}
int signal(int s)
{
	return(++s);
}
void producer()
{
	mutex=wait(mutex);
	full=signal(full);
	empty=wait(empty);
	x++;
	printf("\nProducer producer item [%d]",x);
	mutex=signal(mutex);
}
void consumer()
{
	mutex=wait(mutex);
	full=wait(full);
	empty=signal(empty);
	printf("\nConsumer consumes item [%d]",x);
	x--;
	mutex=signal(mutex);
}
