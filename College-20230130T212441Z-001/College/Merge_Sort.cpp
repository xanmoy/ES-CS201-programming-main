#include <stdio.h>

void sort(int arr[],int l,int r)
{
	int i,j,n1,n2,p=0,q=0;
    if (l<r) 
	{
        int m=l+(r-l)/2;
        sort(arr,l,m);
        sort(arr,m+1,r);
    	n1=(m-l)+1;
		n2=r-m;
		int arr1[n1],arr2[n2];
    		for (i=0;i<n1;i++)
    	{
    		arr1[i]=arr[l+i];
		} 
    	for (j=0;j<n2;j++)
    	{
    		arr2[j]=arr[m+1+j];
		} 
    	while(p<n1&&q<n2) 
		{
        if (arr1[p]<=arr2[q]) 
		{
            arr[l]=arr1[p];
            p++;
        }
        else 
		{
            arr[l]=arr2[q];
            q++;
        }
        l++;
    	}
    	while(p<n1) 
		{
    	    arr[l]=arr1[p];
    	    p++;
    	    l++;
    	}
    	while (q<n2) 
	{
        arr[l]=arr2[q];
        q++;
        l++;
    }
    }
}



int main()
{
    int i,n,arr[100];
	printf("Enter the Size of Array - ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value for the position %d - ",i+1);
		scanf("%d",&arr[i]);
	}
    sort(arr,0,n-1);
    printf("\nArray after performing Sorting: ");
    for (i=0;i<n;i++)
    {
    	printf("%d,",arr[i]);
	}
    printf("\n");
    return 0;
}