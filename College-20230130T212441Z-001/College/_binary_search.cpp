#include <stdio.h>
int main()
{
    int i,high,low,mid,n,sel,bs[100];
    printf("Enter the number of elements to be present n the array - ");
    scanf("%d",&n);
    printf("Enter %d integers : \n", n);
    for (i=0;i<n;i++)
    {
    	printf("Enter the value for the position %d - ",i);
        scanf("%d", &bs[i]);
    }
    printf("Enter the element to be searched - - ");
    scanf("%d", &sel);
    high=0;
    low=n-1;
    mid=(high+low)/2;
    while (high<=low) 
	{
        if(bs[mid]<sel)
		{
            high=mid+1;
        }
        else if(bs[mid]==sel) 
		{
            printf("\n%d found at index %d.\n",sel, mid+1);
            break;
        }
        else
		{
            low=mid-1;
        }
    mid=(high+low)/2;
    }
    if(high>low)
    {
    printf("Element not found in the array ");
    }
  return 0;
}