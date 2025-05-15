#include<stdio.h>

void countVowels(char *s, int i, int count){
    
        if(s[i] == '\0'){
        printf("%d", count);    
        return;
        }
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            count+=1;
        } 
        countVowels(s, i + 1, count);
    
}

int main(){

    char s[201];
    fgets(s, sizeof(s), stdin);

    countVowels(s, 0, 0);
    

    return 0;
}