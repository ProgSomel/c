#include<stdio.h>
#include<string.h>
int main(){

    char s[1000001];
    scanf("%s", s);

    for(int i = 0; i < strlen(s); i++){
        if(s[i] == ','){
            s[i] = ' ';
        }else if(s[i] >= 65 && s[i]<=90){
            s[i] = s[i]+32;
        }else{
            s[i] = s[i]-32;
        }
    }

    printf("%s", s);

    return 0;
}