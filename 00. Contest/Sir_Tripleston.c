#include<stdio.h>
#include<string.h>
int main(){

    char s[78];
    scanf("%s", s);

    int len = strlen(s);

    char freq[78] = {0};

    for(int i = 0; i < len; i++){
        freq[s[i]-'a']++;
    }

    for(int i = 0; i < strlen(freq); i++){
        if(freq[i]!=3){
        printf("%c", i+'a');

        }
    }

    return 0;
}