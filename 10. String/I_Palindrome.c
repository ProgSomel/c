#include<stdio.h>
#include<string.h>
int main(){

    char s[10001];
    scanf("%s", s);

    int length = strlen(s);

    int palinDrome = 1;

    for(int i = 0, j = length - 1; i < j; i++, j--){
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        if(s[i]!=s[j]){
            palinDrome = 0;
        }

    }

    if(palinDrome == 1){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}