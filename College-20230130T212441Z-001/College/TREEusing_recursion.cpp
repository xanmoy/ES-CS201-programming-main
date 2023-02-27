#include<stdio.h>
#include<stdlib.h>


struct node {
int data;
struct node *l;
struct node *r;
};

struct node *root;

void insert(node **tree,int val)
{
	node *temp = NULL;
    if(!(*tree))
    {
        node *temp = NULL;
        temp=(node *)malloc(sizeof(node));
        temp->l=temp->r=NULL;
        temp->data=val;
        *tree=temp;
        return;
    }
	if(val<(*tree)->data)
    {
        insert(&(*tree)->l,val);
    }
    else if(val>(*tree)->data)
    {
        insert(&(*tree)->r,val);
    }

}

    void preorder(node *tree)
	{
  	    if (tree)
  	    {
   	        printf("%d,",tree->data);
  	        preorder(tree->l);
 	        preorder(tree->r);
 	    }

	}
	void inorder(node * tree)
	{
 	    if (tree)
 	    {
	        inorder(tree->l);
	        printf("%d,",tree->data);
	        inorder(tree->r);
	    }
	}
	void postorder(node * tree)
	{
 	    if (tree)
 	    {
	        postorder(tree->l);
	        postorder(tree->r);
 	        printf("%d,",tree->data);
 	    } 
	}


void print()
{
	int chs1;
	node *p;
	if(root==NULL)
	{
		printf("\nNo Elements Found To Display\n\n");
	}
	else
	{
		p=root;
		while(chs1!=4)
		{
			printf("Enter a method to display :\n");
			printf("1. Preorder\n2. Inorder\n3. Postorder\n4. Exit\n");
			printf("Enter your choice - ");
			scanf("%d",&chs1);
    	    switch(chs1)
    	    {
     		   	case 1:
    	    		printf("\nPREORDER : \n");
					preorder(p);
					printf("\n\n");
					break;
				case 2:
					printf("\n\nINORDER : \n");
					inorder(p);
					printf("\n\n");
					break;
				case 3:
					printf("\n\nPOSTORDER : \n");
					postorder(p);
					printf("\n\n");
					break;
				case 4:
					printf("\n\nEXITED\n\n");
			}
		}
	}
}

void create()
{
	if(root==NULL)
	{
		int n,i,v,chs;
    	root=NULL;
    	printf("Enter the number of nodes to be inserted - ");
    	scanf("%d",&n);
    	for(i=1;i<=n;i++)
    	{
    		printf("Enter the value to be inserted -");
    		scanf("%d",&v);
    		insert(&root, v);
		}
	}
	else
	{
		printf("\nTree Already Created\n\n");
	}
}

int main()
{
int chs;
while(chs!=3)
	{
		printf("Enter a Operation :\n");
		printf("1. Creation\n2. Display\n3. Exit\n");
		printf("Enter your choice - ");
		scanf("%d",&chs);
        switch(chs)
        {
        	case 1:
				create();
				break;
			case 2:
				print();
				break;
			case 3:
				printf("\n\nEXITED\n\n");
		}
	}
}



