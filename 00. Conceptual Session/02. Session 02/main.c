#include<stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    
    while(n!=0){
        int x;
        scanf("%d", &x);
        long long int fact = 1;
        for( int i = 1; i <=x; i++){
            fact *= i;
        }
        printf("%lld\n", fact);
        n--;

    }
}