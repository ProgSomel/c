#include<stdio.h>

void hello(){ //! Recursive Function
    printf("Hello\n");
    hello(); //! Recursion--> Function nijei nijeke call kore//infinite loop
}

int main(){

    printf("Hi\n");
    hello();

    return 0;
}