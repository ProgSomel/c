#include<stdio.h>

void printDigits(long long int num){
    if(num == 0){
        return;
    }
    printDigits(num/10);
    printf("%d ", num%10);
    
}

int main(){

    int n;
    scanf("%d", &n);

    while(n--){
        long long int num;
        scanf("%lld", &num);
        if(num == 0){
            printf("0");
        }else{
            printDigits(num);

        }
        printf("\n");



    }
    

    return 0;
}