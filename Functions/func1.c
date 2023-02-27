#include<stdio.h>

void printHello();//function prototype
void printGoodbye();
int main(){
    printHello();//function call
    printGoodbye();
    return 0;
}
//function defination
void printHello(){
printf("Hello!\n");

}
 void printGoodbye(){
    printf("Good Bye:)\n");
 }