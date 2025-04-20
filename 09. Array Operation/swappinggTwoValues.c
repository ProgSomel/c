//! Swapping two values
#include<stdio.h>
int main(){
   int a = 10;
   int b  = 20;

   printf("Before Swapping:\nA = %d\nB = %d\n", a, b);

   int temp = a;
   a = b;
   b = temp;

   printf("After Swapping:\nA = %d\nB = %d\n", a, b);
    
    return 0;
}