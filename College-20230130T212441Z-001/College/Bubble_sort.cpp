#include <stdio.h>
int main()
{
    int i,n,j,temp,arr[100];
	printf("Enter the Size of Array - ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value for the position %d - ",i+1);
		scanf("%d",&arr[i]);
	}
    for (i=0;i<n-1;i++)
    {
    	for (j=0;j<(n-i)-1;j++)
        {
        	if (arr[j]>arr[j+1])
        	{
                temp=arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
			}
		}
	}
    printf("\nArray after performing Sorting: ");
    for (i=0;i<n;i++)
    {
    	printf("%d,",arr[i]);
	}
    printf("\n");
    return 0;
}