//! Insert a Element in Array Position
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n+1]; //? First Increase the size of the Array

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int val, pos;
    scanf("%d %d", &val, &pos);
    for(int i = n; i > pos; i--){
        a[i] = a[i-1];
    }
    a[pos] = val;
    for(int i = 0; i <= n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}