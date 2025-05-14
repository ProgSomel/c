#include<stdio.h>
#include<string.h>

int main(){

   char s[10001];
   scanf("%s", s);

  int fr[26] = {0};

  for(int i = 0; s[i]!='\0'; i++){
    fr[s[i]-'a']++;
  }

  for(int i = 0; i < 26; i++){
    if(fr[i] > 0){
        printf("%c - %d\n", 'a'+i, fr[i]);
    }
  }
 
   
    return 0;
}