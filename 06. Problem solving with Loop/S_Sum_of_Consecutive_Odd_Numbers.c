#include<stdio.h>
#include<limits.h>
int main(){
   int n;
   scanf("%d", &n);
   int sum = 0;

   while (n != 0)
   {
    int num1, num2;
   
    scanf("%d %d", &num1, &num2);
    if(num1 > num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for(int i = num1 + 1; i < num2; i++){
        if(i % 2 != 0){
            sum+=i;
        }
    }
    printf("%d\n", sum);
    sum = 0;
    n--;
   }
   
  
    return 0;
}