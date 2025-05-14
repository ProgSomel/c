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

    int flag = 1;

    if(r == c){

        for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
           if(i == j){

           }else{
            if(arr[i][j] != 0){
                printf("This is not a Diagonal Matrix\n");
                flag = 0;
            }
           }
        }
    }
    if(flag == 1){
        printf("This is Primary Diagonal Matrix\n");
    }
    }else{
        printf("This is not Primary Diagonal Matrix");
    }

    return 0;
}