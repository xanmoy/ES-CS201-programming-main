#include <stdio.h>

void swap(int *a,int *b) 
{
	int t;
  	
}



int mid(int arr[],int low,int high) 
{
	int i,j,piv,t;
	piv=arr[high];
	i=(low-1);
	for(j=low;j<high;j++) 
	{
		if (arr[j]<=piv) 
		{      
			i++;
    		t=arr[i];
  			arr[i]=arr[j];  
  			arr[j]=t;
		}
	}
	t=arr[i+1];
  	arr[i+1]=arr[high];  
  	arr[high]=t;
	return(i+1);
}



void sort(int arr[],int low,int high)
{
	int piv;
  	if(low<high) 
	{
    	piv=mid(arr,low,high);
    	sort(arr,low,piv-1);
    	sort(arr,piv+1,high);
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
    for(int i=0;i<n;++i) 
  	{
    	printf("%d,",arr[i]);
  	}
  	printf("\n");
  	return 0;
}