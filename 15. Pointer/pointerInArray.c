#include<stdio.h>

int main(){

    int a[5] = {10, 20, 30, 40, 50};
    *a = 1000;

    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    return 0;
}