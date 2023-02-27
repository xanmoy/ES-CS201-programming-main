#include<stdio.h>
int i,n,n1,que[50],chs,f=-1,r=-1,c=0;


void enqueue ()
{
	if(((r>=n-1)&&(f==0))||(r+1==f))
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
		r=(r+1)%n;
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
		f=(f+1)%n;		
	}
}


void display()
{
	if(r<f)
	{
		if(r+2==f)
		{
	    	printf("\nQueue contains :\n");
	    	for(i=0;i<f-1;i++)
	    	{
	    		printf("%d,",que[i]);
	    	}
	    	for(i=f;i<n;i++)
	    	{
	    		printf("%d,",que[i]);
	    	}
	    	printf("\n");
	    }
	    else if(r+1==f)
	    {
	    	printf("\nQueue contains :\n");
	    	for(i=0;i<n;i++)
	    	{
	    		printf("%d,",que[i]);
	    	}
	    	printf("\n");
		}
	}
	else if((r>=f)&&(r!=-1)&&(f!=-1))
	{
		printf("\nQueue contains :\n");
		for(i=f;i<=r;i++)
		{
			printf("%d,",que[i]);
		}
		printf("\n");
	}
	else
	{
		printf("\nQueue is empty .\n");
	}
}

int main()
{
	printf("Enter the size of Queue - ");
	scanf("%d",&n);
    while(chs!=4)
	{
		printf("\nQueue Operations Available are :\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice from the above menu - ");
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