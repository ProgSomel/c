#include<stdio.h>

int main(){
    char c;
    scanf("%c", &c);

    int i = 1;
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }

    return 0;
}