#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int x;
    scanf("%d", &x);

    int arr[n];

    int isAvail = -1;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++ ){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == x){
                isAvail = 1;
            }
        }
    }

    if(isAvail == 1){
        printf("YES");
    }else{{
        printf("NO");
    }}
    return 0;
}