#include<stdio.h>
void printValues(int n){
    for(int i = 1; i <=n; i++){
        if(i == n){
            printf("%d", i);
        }else{
        printf("%d ", i);
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printValues(n);
    return 0;
}