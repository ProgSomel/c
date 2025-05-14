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

    int index ;
    scanf("%d", &index);

    //? Output
    for(int i = 0; i < r; i++){
        printf("%d ", arr[i][index]);
    }

    

    return 0;
}