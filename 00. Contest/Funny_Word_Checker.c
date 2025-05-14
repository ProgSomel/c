#include<stdio.h>
#include<string.h>
int main(){

    char s[101];
    scanf("%s", s);


    char s1[101];

    int lenOfS = strlen(s);



    for( int i = 0; s[i]!= '\0'; i++){
        s1[i] = s[i];
    }
    s1[lenOfS] = '\0';

    int lenOfS1 = strlen(s1);


    char temp = s1[0];
    s1[0] =  s1[lenOfS1-1];
    s1[lenOfS1-1] = temp;
    
    if(strcmp(s1, s) == 0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}