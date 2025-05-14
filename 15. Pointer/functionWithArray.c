#include<stdio.h>

void func(int a[], int len){
   for(int i = 0; i < len; i++){
        printf("%d ", a[i]);
    }
}

int main(){

    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    func(a, n);
    
    return 0;
}