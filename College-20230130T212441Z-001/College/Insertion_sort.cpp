//WAP in C to perform the Insertion sort.

#include <stdio.h>
int main(void)
{
	int arr[1000],n,i,j,val;
    printf("Enter the size of array - ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("Enter the value for the positon %d - ",i+1);
    	scanf("%d",&arr[i]);
	}
    for(i=1;i<n;i++)
    {
        val=arr[i];
        j=i;
        while((j>0)&&(arr[j-1]>val))
        {
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=val;
    }
 
    for(i=0;i<n;i++)
	{
        printf("%d ",arr[i]);
    }
    return 0;
}
