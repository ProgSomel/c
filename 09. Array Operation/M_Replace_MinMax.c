#include<stdio.h>
#include<limits.h>
int main(){
   int n;
   scanf("%d", &n);
   int a[n];
   int minIndex = 0;
   int maxIndex = 0;
   if(n >= 2){
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
   }

   for(int i = 1; i < n; i++){
    scanf("%d", &a[i]);
    if(a[i] < a[minIndex]){
        minIndex = i;
    }
    if(a[i] > a[maxIndex]){
        maxIndex = i;
    }
}


   int temp = a[maxIndex];
   a[maxIndex] = a[minIndex];
   a[minIndex] = temp;
   
   for(int i = 0; i < n; i++){
    printf("%d ", a[i]);
    
}
    return 0;
}