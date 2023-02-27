#include <stdio.h>

int sum(int x, int y)
{
    return x + y;
}
void printTable(int n) //parameter
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i * n); //argument
    }
}

int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    printTable(n);
    return 0;
}

