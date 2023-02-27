#include<stdio.h>
#include<stdlib.h>


void create(); // CREATION OF LIST
void insert(); // INSERTION IN THE LIST
void del(); // DELETION FROM THE LIST
void ifirst(); // INSERTION IN THE FIRST POSITION OF THE LIST
void ilast(); // INSERTION IN THE LAST POSITION OF THE LIST
void inth(); // INSERTION IN A GIVEN POSITION IN THE LIST
void ival(); // INSERTION AFTER A GIVEN VALUE IN THE LIST
void dfirst(); // DELETION FROM THE FIRST POSITION OF THE LIST
void dlast(); // DELETION FROM THE LAST POSITION OF THE LIST
void dnth(); // DELETION OF A GIVEN POSITION FROM THE LIST
void dval(); // DELETION OF GIVEN VALUE FROM THE LIST
void blank_ins(); // INSERTING VALUE IN A BLANK LIST
void print(); // PRINTING THE LIST
void fprint(); // PRINTING THE LIST IN THE FORWARD DIRECTION
void bprint(); // PRINTING THE LIST IN THE BACKWARD DIRECTION



struct node 
{
	int data;
	struct node *prv;
	struct node *nxt;
};

int n,i;
struct node *p,*q,*start=NULL;



int main()
{
	int chs;
    while(chs!=5)
    {
    	printf("\nChoose any Operation :");
    	printf("\n1. Creation\n2. Insertion\n3. Deletion\n4. Display\n5. Exit");
    	printf("\nEnter Your Choice : ");
    	scanf("%d",&chs);
        switch (chs)	
		{
        	case 1:
        	{
        		create();
        		break;
			}
			case 2:
        	{
        		insert();
        		break;
			}
			case 3:
        	{
        		del();
        		break;
			}
			case 4:
			{
				print();
				break;
			}
			case 5:
				{
					printf("\nExited\n");
					break;
				}
			default:
			{
				printf("Please Enter a Valid Chioce");
			}
		}   
	}
	return 0;
}


void create()
{
	if(start==NULL)
	{
		printf("\nEnter the number of nodes to be created - ");
		scanf("%d",&n);
    	p=(struct node *)malloc(sizeof(struct node));
    	printf("Enter the value to be inputed in the node No. 1- ");
    	scanf("%d",&p->data);
    	start=p;
    	p->prv=NULL;
    	for(i=0;i<n-1;i++)
    	{
    		q=(struct node *)malloc(sizeof(struct node));
        	printf("Enter the value to be inputed in the node No. %d- ",i+2);
        	scanf("%d",&q->data);
        	p->nxt=q;
        	q->prv=p;
        	p=q;
		}
		p->nxt=NULL;
		printf("\nLIST CREATED\n");
	}
	else
	{
    	printf("\nLIST ALREADY CREATED\n");
	}
}


void insert()
{
	int chs1;
	if(start!=NULL)
	{
		while(chs1!=6)
        {
    		printf("\nChoose any method to perform Insertion Operation :");
    		printf("\n1. Insertion at the First Position\n2. Insertion at the Last position\n3. Insertion at the given position\n4. Insertion after a given value\n5. Display\n6. Previous Menu");
    		printf("\nEnter Your Choice : ");
    		scanf("%d",&chs1);
        	switch (chs1)	
			{
        		case 1:
        		{
        			ifirst();
        			break;
				}
				case 2:
        		{
        			ilast();
        			break;
				}
				case 3:
        		{
        			inth();
        			break;
				}
				case 4:
				{
					ival();
					break;
				}
				case 5:
				{
					print();
					break;
				}
				case 6:
				{
					break;
				}
				default:
				{
					printf("PLEASE ENTER A VALID CHOICE");
				}
			}   
		}
	}
    	else
	{
		printf("\nNO LIST FOUND ! INSERTING IN A BLANK LIST.\n\n");
		blank_ins();
	}
		
}


void ifirst()
{
	struct node *f;
	f=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value to be inputed in the first node - ");
    scanf("%d",&f->data);
    start->prv=f;
    f->nxt=start;
    start=f;
    f->prv=NULL;
    printf("\n%d INSERTED IN THE FIRST POSITION.\n",f->data);
}


void ilast()
{
	struct node *l,*temp;
	l=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value to be inputed in the last node - ");
    scanf("%d",&l->data);
    temp=start;
	while(temp->nxt!=NULL)
	{
		temp=temp->nxt;
	}
	temp->nxt=l;
	l->prv=temp;
	l->nxt=NULL;
    printf("\n%d INSERTED IN THE LAST POSITION.\n",l->data);
}


void inth()
{
	
	int pos,k=1,i=1,j=1;
	struct node *t,*n,*temp;
	printf("\nEnter a position to insert a Node - ");
	scanf("%d",&pos);
	n=(struct node *)malloc(sizeof(struct node));
	t=temp=start;
     while(t!=NULL)
    {
    	t=t->nxt;
    	k=k+1;
	}
	if((pos>1)&&(pos<=k))
	{
		printf("Enter the value to be inputed in the %dth node - ",pos);
    	scanf("%d",&n->data);
    	while(i!=pos)
    	{
    		i=i+1;		}
		while(j<i-1)
		{
			temp=temp->nxt;
			j=j+1;
		}
		n->nxt=temp->nxt;
		n->prv=temp;
		n->nxt->prv=n;
		temp->nxt=n;
		printf("\n%d INSERTED IN THE POSITION NO. %d\n",n->data,pos);
    }
    else if(pos==1)
    {
    	ifirst();
	}
    else if(pos>k+1)
    {
    	printf("\nPOSITION CANNOT BE LINKED WITH THE LIST\n");
	}
}


void blank_ins()
{
	struct node *fp;
	fp=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value to be inputed in the first node - ");
    scanf("%d",&fp->data);
    start=fp;
    fp->prv=NULL;
    fp->nxt=NULL;
}


void ival()
{
	int val;
	struct node *v,*t;
	t=start;
	if(start!=NULL)
	{
		printf("Enter the value to be searched - ");
		scanf("%d",&val);
		while(t!=NULL)
		{
			if(t->data==val)
			{
				v=(struct node *)malloc(sizeof(struct node));
				printf("Enter the value for the new node -");
				scanf("%d",&v->data);
				v->nxt=t->nxt;
				t->nxt=v;
				v->prv=t;
				v->nxt->prv=v;
				printf("\n%d INSERTED AFTER %d\n",v->data,val);
				break;
			}	
			else if(t->nxt==NULL)
			{
				printf("\nGIVEN VALUE IS NOT FOUND\n");
				break;
			}
			t=t->nxt;
		}
	}
	else
	{
		printf("\nCREATE A LIST FIRST ,TO SEARCH FOR A VALUE\n");
	}
	
}


void del()
{
	int chs2;
    if(start!=NULL)
    {
    	while(chs2!=6)
    	{
    		printf("\nChoose any method to perform Deletion Operation :");
    		printf("\n1. Deletion at the First Position\n2. Deletion at the Last position\n3. Deletion at the given position\n4. Deletion of a given value \n5. Display\n6. Previous Menu");
    		printf("\nEnter Your Choice : ");
    		scanf("%d",&chs2);
        	switch (chs2)	
			{
        		case 1:
        		{
        			dfirst();
        			break;
				}
				case 2:
        		{
        			dlast();
        			break;
				}
				case 3:
        		{
        			dnth();
        			break;
				}
				case 4:
        		{
        			dval();
        			break;
				}
				case 5:
				{
					print();
					break;
				}
				case 6:
				{
					break;
				}
				default:
				{
					printf("PLEASE ENTER A VALID CHOICE");
				}
			}   
		}
	}
	else
	{
		printf("\nNO LIST FOUND !\n");
	}
}


void dfirst()
{
	struct node *f;
    f=start;
    start=f->nxt;
    start->prv=NULL;
    printf("\n%d DELETED FROM THE FIRST POSITION.\n",f->data);
    free(f);
}


void dlast()
{
	int i=1,j=1;
	struct node *temp,*temp1;
    temp=temp1=start;
	while(temp->nxt!=NULL)
	{
		temp=temp->nxt;
		i=i+1;
	}
	if(temp==start)
	{
		start=NULL;
	}
	else
	{
		while(j<i-1)
		{
			temp1=temp1->nxt;
			j=j+1;
		}
		temp1->nxt=NULL;
	}
	printf("\n%d DELETED FROM THE LAST POSITION.\n",temp->data);
	free(temp);
}


void dnth()
{
	int pos,i=1,j=1,k=0;
	struct node *t,*temp,*temp1;
	printf("Enter a position to delete a Node - ");
	scanf("%d",&pos);
    t=temp=temp1=start;
    while(t!=NULL)
    {
    	t=t->nxt;
    	k=k+1;
	}
	if((pos>1)&&(pos<=k))
	{
		while(i!=pos)
		{
			temp=temp->nxt;
			i=i+1;
		}
		while(j<i-1)
		{
			temp1=temp1->nxt;
			j=j+1;
		}
		temp1->nxt=temp->nxt;
		temp1->nxt->prv=temp1;
		printf("\n%d DELETED FROM THE POSITION NO.%d\n",temp->data,pos);
		free(temp);
    }
    else if(pos==1)
    {
    	dfirst();
	}
	else if(pos>k)
	{
		printf("NO DATA FOUND AT POSITION NUMBER %d",pos);
	}
}


void dval()
{
	int val;
	struct node *v,*t;
	v=t=start;
	printf("Enter the value to be searched - ");
		scanf("%d",&val);
		while(v!=NULL)
		{
			if(v->data==val)
			{
				if(val==start->data)
				{
					dfirst();
    				break;
				}
				else
				{
					while(t->nxt!=v)
					{
						t=t->nxt;
					}
					t->nxt=v->nxt;
					t->nxt->prv=t;
					printf("\n%d REMOVED FROM THE LIST\n",v->data);
					free(v);
					break;
				}	
			}
			else if(t->nxt==NULL)
			{
				printf("\nGIVEN VALUE IS NOT FOUND\n");
				break;
			}
			v=v->nxt;
		}
}

void print()
{
	int chs6;
	while(chs6!=3)
	{
		printf("\nEnter a method to print : \n");
		printf("1. Forawrd Display\n2. Backward Display\n3. Previous Menu\n");
		printf("Enter Your Choice - ");
		scanf("%d",&chs6);
		switch(chs6)
		{
			case 1:
				fprint();
			    break;
			case 2:
				bprint();
				break;
			case 3:
				break;
			default:
			    printf("Please enter a valid choice .");	
		}
	}
}
void fprint()
{
	if(start!=NULL)
	{
		struct node *d;
		d=start;
		printf("\nLIST : ");
		while(d!=NULL)
		{
			printf("%d,",d->data);
			d=d->nxt;
		}
		printf("\n");
    }
    else
    {
    	printf("\nNOTHING TO DISPLAY.\n");
	}
}


void bprint()
{
	if(start!=NULL)
	{
		struct node *t;
		t=start;
		printf("\nLIST : ");
		while(t->nxt!=NULL)
		{
			t=t->nxt;
		}
		while(t->prv!=NULL)
		{
			printf("%d,",t->data);
			t=t->prv;
		}
		printf("%d,",t->data);

		printf("\n");
    }
    else
    {
    	printf("\nNothing To Display.\n");
	}
}