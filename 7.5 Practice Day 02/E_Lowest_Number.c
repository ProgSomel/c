#include<stdio.h>
#include<limits.h>
int main(){

    int n;
    scanf("%d", &n);
    int a[n];
    int min_value = INT_MAX;
    int min_index;
    if(n >=2){
        for(int i = 1; i <= n; i++){
            scanf("%d", &a[i]);
           if(a[i] < min_value){
            min_value = a[i];
            min_index = i;
           }
        }
    }
    printf("%d %d", min_value, min_index);
    return 0;
}