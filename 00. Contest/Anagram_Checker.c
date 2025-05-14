#include<stdio.h>
#include<string.h>
int main(){

    char word1[101];
    char word2[101];

    scanf("%s %s", word1, word2);

    int len = strlen(word1);

    int freq[26] = {0};

    for(int i = 0; i < len; i++){
        freq[word1[i]-'a']++;
        freq[word2[i]-'a']--;
    }

    int isAngram = 1;

    for(int i = 0; i < 26; i++){
        if(freq[i]!= 0){
            isAngram = 0;
            break;
        }
    }

    if(isAngram == 1){
        printf("Yes");
    }else{
        printf("No");
    }


    return 0;
}