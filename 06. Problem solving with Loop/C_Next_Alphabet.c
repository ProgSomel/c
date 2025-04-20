#include<stdio.h>
#include<limits.h>
int main(){
  char c;
  scanf("%c", &c);
  if(c == 'z'){
    printf("a");
  }else{
    printf("%c", c + 1);
  
  }
  
    return 0;
}