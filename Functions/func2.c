#include<stdio.h>
void namaste();
void bonjour();
void hello(){
    printf("Hello\n");
}
int main(){
printf("enter f for french & i for indian : ");
char ch;
scanf("%c", &ch);

if (ch =='i') {
    namaste();
} else if( ch =='f'){
    bonjour();
}else{
    hello();
}
    return 0;
}

void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("Bonjour\n");
}