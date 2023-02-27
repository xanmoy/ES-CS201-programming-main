#include<stdio.h>
int i,n,n1,stk[50],chs,top=-1;


void push ()
{
	if(top>=n-1)
	{
		printf("\nStack is in overflow situation .\n");
	}
	else
	{
		printf("\nEnter a value to be inputed - ");
		scanf("%d",&n1);
		top=top+1;
		stk[top]=n1;
	}
}


void pop()
{
	if(top<0)
	{
		printf("\nStack is in underflow situation .\n");
	}
	else
	{
		printf("\nDeleted value is - %d\n",stk[top]);
		top=top-1;
	}
}


void display()
{
	if(top<0)
	{
		printf("\nStack is empty .\n");
	}
	else
	{
		printf("\nStack contains :\n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stk[i]);
		}
		printf("\n");
	}
}

int main()
{
	printf("Enter the size of stack - ");
	scanf("%d",&n);
    while(chs!=4)
	{
		printf("\nStack Operations Available are :\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice from the above menu - ");
	    scanf("%d",&chs);
		switch(chs)
		{
		    case 1:
		    {
		        push();	
				break;	
		    }
		    case 2:
		    {
			    pop();
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
			    printf("Please enter a valid input .");
		    }
		}
	}
	return 0;
}