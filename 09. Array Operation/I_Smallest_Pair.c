#include<stdio.h>
#include<limits.h>
int main(){
   int t;
   scanf("%d", &t);
  
   int smallestSum = INT_MAX;
   

  while(t>=1){
    int n;
    scanf("%d", &n);
    int a[n];
    if(n >=2){
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
    }
    
    for(int i = 1; i < n; i++){
        for(int j = i + 1; j<n; j++){
            int sum = a[i]+a[j]+(j-i);
            if(sum < smallestSum){
                smallestSum = sum;
            }
        }
    }

       printf("%d\n", smallestSum);
       smallestSum = INT_MAX;
       t--;
  }

  

    return 0;
}