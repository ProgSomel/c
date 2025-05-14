#include<stdio.h>
#include<string.h>
void odd_even(){

    int n;
   scanf("%d", &n);
   int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int numOfEvens = 0;
    int numOfOdds = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            numOfEvens++;
        }else{
            numOfOdds++;
        }
    }

    printf("%d %d", numOfEvens, numOfOdds);


}

int main(){

   
   odd_even();
   return 0;
}