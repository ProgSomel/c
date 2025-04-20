#include<stdio.h>
#include<limits.h>
int main(){
   int n;
   int max = INT_MIN;
   scanf("%d", &n);
   while(n!=0){
    int num;
   
    scanf("%d", &num);
    if(num > max) max = num;
    n--;
   }
   printf("%d", max);
    return 0;
}