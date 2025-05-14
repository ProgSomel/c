#include<stdio.h>
#include<string.h>
int is_palindrome(char s[]){
    
    
    int len = strlen(s);
    

    char reverse[len+1];
    for(int i = 0; i < len; i++){
        reverse[i] = s[len - 1 - i];
    }
    reverse[len] = '\0';
    if(strcmp(s, reverse) == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    char s[1001];
    scanf("%s", s);
    int isPalin = is_palindrome(s);
    if(isPalin == 1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}