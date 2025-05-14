#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    scanf("%d", &n);

    int arr[n][n];

    int sumOfPrimary = 0;
    int sumOfSecondary = 0;

    //? Input
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           if(i == j){
            sumOfPrimary += arr[i][j];
           }
           if(i + j == n - 1){
            sumOfSecondary += arr[i][j];
           }
        }
    }

    printf("%d", abs(sumOfPrimary - sumOfSecondary));

  

        

    return 0;
}