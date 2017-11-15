#include<stdio.h>
#include<string.h>

struct directory
{
	char dirname[10],fname[10][10];
	int count;
}dir;

void main()
{
	int i,n,j;
	char f[100];
	dir.count=0;
	
	//create a directory
	printf("\nEnter the name of the directory:");
	scanf("%s",dir.dirname);
	
	//creation of a file system
	while(1)
	{
		printf("\n1.Create a file\t2.Delete a file\t3.Display all files\t4.Search for file\t5.Exit");
		scanf("%d",&n);
		
		if(n==1) //Creating a file
		{
			printf("File name:");
			scanf("%s",dir.fname[dir.count]);
			dir.count++;
		}
		else if(n==2) //Deleting a file
		{
			printf("\nEnter the file to be deleted:");
			scanf("%s",f);
			
 			for(i=0;i<dir.count;i++)
			{
				if(strcmp(f,dir.fname[i])==0)
				{
					printf("File %s is deleted ",f);
					for(j=i;j<dir.count;j++)
					{
						strcpy(dir.fname[j],dir.fname[j+1]);
					}
					dir.count--;
					
				}
			}
			if(i==dir.count)
				{
					printf("File %s not found",f);
				}			
		}
		else if (n==3)//Displaying file
		{
			printf("\nThe list of files are:");
			if(dir.count==0)
			{
				printf("\nThe directory is empty\n");
			}

			for(i=0;i<dir.count;i++)
			{
				printf("%s",dir.fname[i]);
			}
			
		}
		else if(n==4)//Searching for a file
		{
			printf("\nEnter the file to be searched:");
			scanf("%s",f);
			
			for(i=0;i<dir.count;i++)
			{
				if(strcmp(f,dir.fname[i])==0)
				{
					printf("File %s is present",f);
					break;

				}
				/*else
				{
					printf("File is absent");
				}*/
			}
			
			if(i==dir.count)
			{
				printf("File is absent");

			
			}
		}
		else
		{
			break;
		}
	}

}
		
			
			
