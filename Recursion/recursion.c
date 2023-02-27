// when a function calls itself, it's called recursion
#include<stdio.h>
#include<math.h>

void printHW(int count){
if(count == 0){
    return;
}
    printf("Hello World\n");
    printHW(count-1);
}

int main(){
    printHW(10);
    return 0;
}