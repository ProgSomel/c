#include<stdio.h>
#include<limits.h>
int main(){
    
    long long int a, b, c;
    long long int d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if (a + b - c == d || a - b + c == d) {
        printf("YES");
        return 0;
    }

    if (a + b * c == d || a * b + c == d || (a + b) * c == d || a * (b + c) == d) {
        printf("YES");
        return 0;
    }

    if (a - b * c == d || a * b - c == d || (a - b) * c == d || a * (b - c) == d) {
        printf("YES");
        return 0;
    }

    printf("NO");
  
    return 0;
}