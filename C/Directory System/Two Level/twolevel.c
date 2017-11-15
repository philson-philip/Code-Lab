#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct directory
{
	char dirname[10],fname[10][10];
	int fcount;
}dir[50];

void main()
{
	int i,n,j;
	char f[100],d[100];
	
	int dcount=0;

	while(1)
	{
		printf("\n1.Create a directory\n2.Create a file\n3.Delete a file\n4.Search file	\n5.Display all file\n6.Exit\n");
		scanf("%d",&n);
		
		if(n==1)//Creating a directory
		{
			printf("\nDirectory Name:");
			scanf("%s",dir[dcount].dirname);
			dir[dcount].fcount=0; //keeping track of files within the directory
			dcount++;
			printf("\nDirectory has been created\n");

		}
		else if(n==2)//Creating a file within a directory
		{
			printf("\nEnter the name of the directory where the file is to be created:");
			scanf("%s",d);
			for(i=0;i<dcount;i++)
			{
				if(strcmp(d,dir[i].dirname)==0)
				{
					printf("\nFile name:");
					scanf("%s",dir[i].fname[dir[i].fcount]);
					dir[i].fcount++;
					printf("\nFile has been created\n");
					break;
				}
				if(i==dcount)
				{
					printf("\nDirectory Not Found\n");
				}

			}



		}
		else if(n==3)//Deleting a file within the directory
		{
			printf("\nEnter the name of the directory from where the file is to be deleted:");
			scanf("%s",d);
			for(i=0;i<dcount;i++)
			{
				if(strcmp(d,dir[i].dirname)==0)
				{
					printf("\nFile name:");
					scanf("%s",f);
					for(j=0;j<dir[i].fcount;j++)
					{
						if(strcmp(f,dir[i].fname[j])==0)
						{
							printf("\nFile %s has been deleted,",f);
							dir[i].fcount--;
							strcpy(dir[i].fname[j],dir[i].fname[dir[i].fcount]);
							break;
						}
					}
					printf("\nFile Not found\n");
				}
				if(i==dcount)
				{
					printf("\nDirectory not found\n");
				}
			}
			
		}
		else if(n==4)//searching a file in the directory
		{
			printf("\nEnter the directory to be searched:");
			scanf("%s",d);
			for(i=0;i<dcount;i++)
			{
				if(strcmp(d,dir[i].dirname)==0)
				{
					printf("\nEnter the file to be searched:");
					scanf("%s",f);
					for(j=0;j<dir[i].fcount;j++)
					{
						if(strcmp(f,dir[i].fname[j])==0)
						{
							printf("\nFile %s is present\n",f);			
							break;
						}
					}
					if(j==dir[i].fcount)
					{
						printf("\nFile %s is not present\n",f);
						break;
					}
				}
				if(i==dcount)
				{
					printf("\nThe directory is not present\n");
				}
				
			}
			


		}
		else if(n==5)//Display all files and directory
		{
			if(dcount==0)
			{
				printf("\nThere are no directories\n");
			}
			
			printf("\nDirectory \t Files");
			for(i=0;i<dcount;i++)
			{
				printf("\n%s\t\t",dir[i].dirname);
				for(j=0;j<dir[i].fcount;j++)
				{
					printf("\t\t%s",dir[i].fname[j]);
				}
			}
		}
		else
		{
			break;
		}
	}

}	
						


		
