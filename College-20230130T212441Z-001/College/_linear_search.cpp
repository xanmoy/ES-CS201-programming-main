#include <stdio.h>
int main()
{
    int ls[100],sel,i,n;
    printf("Enter number of elements to be present n the array - ");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for(i=0;i<n;i++)
    {
    	printf("Enter the value for the position %d - ",i);
    	scanf("%d", &ls[i]);
    }
    printf("Enter a element to be searched - ");
    scanf("%d",&sel);
    for(i=0;i<n;i++)
    {
        if(ls[i]==sel)
        {
            printf("%d is present at location %d.\n",sel, i+1);
            break;
        }
    }
    if(i==n)
    {
    	printf("%d isn't present in the array.\n",sel);
    }
    return 0;
}