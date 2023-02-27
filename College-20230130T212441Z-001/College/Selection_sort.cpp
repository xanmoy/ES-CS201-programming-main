#include <stdio.h>
int main() 
{
    int arr[1000],n,i,j,pos,temp;
    printf("Enter the size of array - ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("Enter the value for the positon %d - ",i+1);
    	scanf("%d",&arr[i]);
	}
    for(i=0;i<(n-1);i++) 
	{
    	pos=i;
    	for(j=i+1;j<n;j++) 
		{
      	    if(arr[pos]>arr[j])
        	{
        	    pos=j;
			}
			
		}
		if(pos!=i)
		{
			temp=arr[i];
       		arr[i]=arr[pos];
        	arr[pos]=temp;
		}
	}
	
   for (i=0;i<n;i++)
   {
      printf("%d,",arr[i]);
   }
   return 0;
}