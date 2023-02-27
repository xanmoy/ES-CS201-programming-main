#include<stdio.h>
#include<stdlib.h>

void ip_restricted();
void op_restricted();
void enqueue();
void dequeue();
void fenqueue();
void rdequeue();
void display();


int i,n,n1,que[50],chs,chs1,f=-1,r=-1,c=0;


int main()
{
	printf("Enter the size of Queue - ");
	scanf("%d",&n);
    while(chs1!='c')
    {
    	printf("\nChoose a method to perform Queue Operations :");
    	printf("\n1.Input Restricted Method\n2.Output Restricted Method\n3.Exit");
    	printf("\nEnter Your Choice : ");
    	scanf("%d",&chs1);
        switch (chs1)	
		{
        	case 1:
        	{
        		ip_restricted();
        		break;
			}
			case 2:
        	{
        		op_restricted();
        		break;
			}
			case 3:
        	{
        		printf("Exited");
        		break;
			}
		}   
	} 
	return 0;
}        

void ip_restricted()
{
	while(chs!=5)
	{
		printf("\nQueue Operations Available are :\n1.Insertion at Rear End\n2.Deletion at Front end\n3.Deletion at Rear end\n4.Display\n5.Previous Menu\nEnter your choice from the above menu - ");
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
			    rdequeue();
				break;	
	        }
		    case 4:
		    {
			    display();
			    break;
		    }
		    case 5:
		    {
		    	break;
		    }
		    default:
		    {
			    printf("\nPlease enter a valid input .\n");
		    }
		}
	}
}

void rdequeue()
{
	if(((f==-1)&&(r==-1))||(r+1==f))
	{
		printf("\nQueue is in underflow situation .\n");
	}
	else
	{
		printf("\nDeleted value is - %d\n",que[r]);
		r=r-1;
	}
}

void op_restricted()
{
	while(chs!=5)
	{
		printf("\nQueue Operations Available are :\n1.Insertion at Rear End\n2.Deletion at Front end\n3.Insertion at Front end\n4.Display\n5.Exit\nEnter your choice from the above menu - ");
	    scanf("%d",&chs);
		switch (chs)
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
		        fenqueue();	
				break;	
		    }
		    case 4:
		    {
			    display();
			    break;
		    }
		    case 5:
		    {
		    	break;
		    }
		    default:
		    {
			    printf("\nPlease enter a valid input .\n");
		    }
		}
	}
}

void fenqueue()
{
	if((((f==0)&&(r==n-1))||((r==0)&&(f==n-1)))||(f==-1))
	{
		printf("\nQueue is in overflow situation .\n");
	}
	else
	{
		if(r<0)
		{
			r=0;
		}
		printf("\nEnter a value to be inputed - ");
		scanf("%d",&n1);
		f=f-1;
		que[f]=n1;
	}
}

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
	if((f<0)||(f==n))
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
	if((r<0)&&(f<0))
	{
		printf("\nQueue is empty .\n");
	}
	else
	{
		if(f<r)
		{
			printf("\nQueue contains :\n");
		    for(i=f;i<=r;i++)
		    {
		    	printf("%d,",que[i]);
		    }
		}
		else if(f>r)
		{
			printf("\nQueue contains :\n");
		    for(i=r;i<=f;i++)
	    	{
	    		printf("%d,",que[i]);
	    	}
		}
		printf("\n");
	}
}



