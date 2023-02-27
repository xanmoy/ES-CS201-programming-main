// Write a C program to input the elements of a 2 matrix array ,and calculate the matrix multiplication of the array.

#include<stdio.h>
int main()
{
	int m,n,i,j,k,a[10][10],b[10][10],c[10][10];
	printf("enter the number of rows - ");
	scanf("%d",&n);
	printf("enter the number of columns - ");
	scanf("%d",&m);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter the value for the position %d,%d - ",i,j);
			scanf("%d",&a[i][j]);
		}	
		printf("\n");
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter the value for the position %d,%d - ",i,j);
			scanf("%d",&b[i][j]);
		}	
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=0;
			for(k=0;k<m;k++)
			{
				c[i][j]+=(a[i][k]*b[k][j]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d     ",c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}