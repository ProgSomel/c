#include<stdio.h>
int main(){

    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    //? Input
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int isZeroMatrix = 1;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] == 1){
                isZeroMatrix = 0;
            }
        }
    }

    if(isZeroMatrix == 0){
        printf("This is not a Zero Matrix\n");
    }else{
        printf("This is  a Zero Matrix\n");
    }
    

    return 0;
}