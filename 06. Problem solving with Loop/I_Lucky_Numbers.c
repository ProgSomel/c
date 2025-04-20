#include<stdio.h>
#include<limits.h>
int main(){
    
    int n;
    scanf("%d", &n);

    int num1, num2;
    
        num1 = n / 10; 
        num2 = n % 10;
   
    
   if(num2 > 0){
    if(num1 % num2 == 0 || num2 % num1 == 0){
        printf("YES");
    }else{
        printf("NO");
    }
   }else{
    printf("YES");
   }
    return 0;
}