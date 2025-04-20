#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int sumOfPositive = 0;
    int sumOfNegative = 0;

   if(n>=1){
    while(n!=0){
        int num;
        scanf("%d", &num);
        if(num > 0){
            sumOfPositive+=num;
        }else{
            sumOfNegative+=num;
        }
        n--;
    }

   }
    printf("%d %d", sumOfPositive, sumOfNegative);
    
   
    return 0;
}