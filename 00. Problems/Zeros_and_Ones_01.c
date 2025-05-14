#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }


    int zeros = 0;
    int ones = 0;

    

    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            zeros++;
        }else{
            ones++;
        }
    }

    printf("%d %d", zeros, ones);
    return 0;
}