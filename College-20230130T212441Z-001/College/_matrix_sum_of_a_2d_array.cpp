#include<stdio.h>
int main()
{
	int m,n,i,j,a[10][10],b[10][10],c[10][10];
	printf("enter the number of rows - ");
	scanf("%d",&n);
	printf("enter the number of columns - ");
	scanf("%d",&m);
	printf("\n");
	printf("enter elements for the 1st array - \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter the value for the position %d,%d - ",i,j);
			scanf("%d",&a[i][j]);
		}	
		printf("\n");
	}
	printf("enter elements for the 2nd array - ");
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter the value for the position %d,%d - ",i,j);
			scanf("%d",&b[i][j]);
			c[i][j]=a[i][j]+b[i][j];
		}	
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}