#include<stdio.h>
int i,n,n1,que[50],chs,f=-1,r=-1;


void enqueue ()
{
	if(r>=n-1)
	{
		printf("\nQueue is in overflow situation .\n");
	}
	else
	{
		if(f<0)
		{
			f=0;
		}
		printf("\nEnter a value to be inputed - ");
		scanf("%d",&n1);
		r=r+1;
		que[r]=n1;
	}
}


void dequeue()
{
	if(f<0)
	{
		printf("\nQueue is in underflow situation .\n");
	}
	else
	{
		printf("\nDeleted value is - %d\n",que[f]);
		f=f+1;
	}
}


void display()
{
	if(r<0)
	{
		printf("\nQueue is empty .\n");
	}
	else
	{
		printf("\nQueue contains :\n");
		for(i=f;i<=r;i++)
		{
			printf("%d,",que[i]);
		}
		printf("\n");
	}
}

int main()
{
	printf("Enter the size of Queue - ");
	scanf("%d",&n);
    while(chs!=4)
	{
		printf("\nQueue Operations Available are :\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice from the above menu - ");
	    scanf("%d",&chs);
		switch(chs)
		{
		    case 1:
		    {
		        enqueue();	
				break;	
		    }
		    case 2:
		    {
			    dequeue();
				break;	
	        }
		    case 3:
		    {
			    display();
			    break;
		    }
		    case 4:
		    {
		    	printf("\nEXITED");
			    break;
		    }
		    default:
		    {
			    printf("\nPlease enter a valid input .\n");
		    }
		}
	}
	return 0;
}