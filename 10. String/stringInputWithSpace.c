#include<stdio.h>
int main(){
    char s[50];
    // gets(s);
    // fgets(s, size, stdin);
    fgets(s, 12, stdin);

    printf("%s\n", s);
    
    return 0;
}