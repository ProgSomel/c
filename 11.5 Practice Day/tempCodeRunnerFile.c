#include<stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    int a[n];

    int fra[n];

    for(int i = 0; i < n; i++){
        fra[i] = 0;
    }

    for(int i = 0; i < n; i++){
        fra[a[i]]++;
    }

    for(int i = 0; i < n; i++){
        printf("%d->%d\n",i, fra[i]);
    }

    return 0;
}