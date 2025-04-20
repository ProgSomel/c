#include<stdio.h>
#include<limits.h>
int main(){
   int n;
   scanf("%d", &n);
   while(n!=0){
    int num;
    scanf("%d", &num);
    if(num == 0){
        printf("0");
    }
        while(num != 0){
            printf("%d ", num % 10);
            num = num / 10;
            
        }
        printf("\n");
  
   
    n--;
   }
    return 0;
}