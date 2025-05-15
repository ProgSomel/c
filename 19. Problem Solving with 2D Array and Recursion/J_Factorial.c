#include<stdio.h>

void factorial(int num, long long int fact){
    
    if(num == 0){
        printf("%lld", fact);
        return;
    }
    fact *= num;
    factorial(num-1, fact);
    
}

int main(){

    int n;
    scanf("%d", &n);


    if(n >=1){
        factorial(n, 1);
    }
    

    return 0;
}