#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    scanf("%d", &n);
    int a[n];

    long long int sum = 0;
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum+=a[i];
    }

    printf("%lld", llabs(sum));

    return 0;
}