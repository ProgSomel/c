#include<stdio.h>

void hello(int n){ 
    if(n == 0) return;
    printf("%d\n", n);
    hello(n - 1); 
    
}

int main(){

    int n;
    scanf("%d", &n);
    hello(n);

    return 0;
}