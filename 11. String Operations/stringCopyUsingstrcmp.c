#include<stdio.h>
#include<string.h>
int main(){

    char a[101], b[101];

    scanf("%s %s", a, b);

    printf("%d", strcmp(a, b));
    //? if 1 --> b is smaller; if -1 ---> a is smaller; if 0 equal

    return 0;
}