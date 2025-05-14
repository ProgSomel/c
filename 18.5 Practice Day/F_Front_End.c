#include<stdio.h>

void reverse(int arr[], int i, int j){
   if(i > j){
    return;
   }
    printf("%d ", arr[i]);
   if(i < j){
     printf("%d ", arr[j]);
   }

    reverse(arr, i+1, j-1);
}
int main(){

    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    reverse(arr, 0, n-1);

    return 0;
}