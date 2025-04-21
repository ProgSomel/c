#include<stdio.h>
int main(){
   int n;
   scanf("%d", &n);
   int a[n];
   int palinDrome = 1;
   if(n >=1){
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
   }

   for(int i = 0, j = n-1; i < j; i++, j--){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;

    if(a[i]!=a[j]){
        palinDrome = 0;
    }

   }

   if(palinDrome == 0){
    printf("NO");
   }else{
    printf("YES");
   }

    return 0;
}