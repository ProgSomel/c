#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;

    while (n > 0)
    {
        int i;
        scanf("%d", &i);
        if(i % 2 == 0){
            even++;
        }else{{
            odd++;;
        }}

        if(i > 0  ){
            pos++;
        }else if(i < 0){
            neg++;
        }
        n--;
    }
    
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    return 0;
}