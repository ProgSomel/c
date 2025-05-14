#include<stdio.h>

void hello(int n){ 
    if(n == 0) return;
    hello(n - 1); 
    printf("%d\n", n);
    
}

int main(){

    int n;
    scanf("%d", &n);
    hello(n);

    return 0;
}