#include<stdio.h>

int printtable(int n){ // parameter
    for (int i=1; i<=10; i++){
        printf("%d\n", i*n);
    }
}

int main(){
    int n;
    printf("Enter first number: ");
    scanf("%d", &n);
    
    printtable(n);//argument
    return 0;
}