#include<stdio.h>

int sum(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}
int main(){

    printf("%d",  sum(10, 5));
    return 0;
}