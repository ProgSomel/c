#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    int space1 = n - 1;
    int star = 1;
    for(int i = 1; i <= n; i++){
        for(int i = 1; i <= space1; i++){
            printf(" ");
        }
        for(int j = 1; j <= star; j++){
            if(i % 2 != 0){
                printf("#");
            }else{
                printf("-");
            }
        }
        printf("\n");
        space1--;
        star+=2;
    }


    if(n > 1){
        int space2 = 1;
        star-=4;

    for(int i = n+1; i >= 1; i--){
        for( int i = 1; i <= space2; i++ ){
            printf(" ");
        }

        for(int j = 1; j <= star; j++){
                if(  i % 2 != 0){
                printf("#");
            }else{
                printf("-");
            }
            }
        printf("\n");
        space2++;
        star-=2;
    }
    }

    return 0;
}