#include<stdio.h>
#include<stdlib.h>
int main(){

    int n, m;
    scanf("%d %d", &n, &m);

  

    if(n >= 2 && m >= 2 && n <= 100 &&  m <= 100){
          int arr[n][m];
            //? Input
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    int flag = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
          
           if(arr[i][j] == x){
                flag = 1;
           }
        }
    }

  if(flag == 1){
    printf("will not take number\n");
  }else{
    printf("will take number\n");
  }

    }
        

    return 0;
}