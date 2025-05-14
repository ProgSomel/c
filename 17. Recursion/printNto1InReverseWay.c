#include<stdio.h>

void hello(int n){ 
    if(n == 6) return;
    hello(n + 1); 
    printf("%d\n", n);
    
}

int main(){

    int n = 1;
    
    hello(n);

    return 0;
}