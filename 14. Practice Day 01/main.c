#include<stdio.h>

void char_to_ascii(char c){
    printf("%c", c - 32);
}
int main(){
    
    char_to_ascii('a');
    
   
    return 0;
}