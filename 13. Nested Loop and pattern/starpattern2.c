#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int space = 0;

    for(int i = n; i >= 1; i--){
        for(int k = 0; k<=space; k++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++ ){
            printf("*");
        }
        printf("\n");
        space++;
    }
    return 0;
}