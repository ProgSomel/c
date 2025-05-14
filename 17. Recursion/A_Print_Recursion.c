#include<stdio.h>

void printNumbers(int n, int i){
    if(i > n) return;
    printf("I love Recursion\n");
    printNumbers(n, i + 1);

}

int main(){


    int n;
    scanf("%d", &n);

    printNumbers(n, 1);


    return 0;
}