#include<stdio.h>
#include<limits.h>
int main(){
   int n;
   long long int fact = 1;
   scanf("%d", &n);
   while(n != 0){
    int num;
    
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        fact*= i;
    }
    printf("%lld\n", fact);
    fact = 1;
    n--;
   }
    return 0;
}