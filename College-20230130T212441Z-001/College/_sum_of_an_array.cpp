#include<stdio.h>
int main()
{
	int n,i,a[10],s=0;
	printf("ENTER THE LENGTH OF ARRAY - ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
	printf("ENTER THE VALUE OF POSITION %d - ",i);
	scanf("%d",&a[i]);
    s=s+a[i];	
    }
    printf("SUM OF THE GIVEN ARRAY : %d",s);
	return 0;
}