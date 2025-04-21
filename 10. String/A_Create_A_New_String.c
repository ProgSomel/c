#include<stdio.h>
#include<string.h>
int main(){

    char s[10001];
    char t[10001];
    char newString[1000001];

    scanf("%s", &s);
    scanf("%s", &t);

    printf("%d %d\n", strlen(s), strlen(t));

   printf("%s %s", s, t);


    return 0;
}