//! Remoe a Element from Array Position
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int pos;
    scanf("%d", &pos);
    for(int i = pos; i < n-1; i++){
        a[i] = a[i+1];
    }

    n--;

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}