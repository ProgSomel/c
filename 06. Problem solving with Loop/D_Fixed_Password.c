#include<stdio.h>
int main(){
   int flag = -1;
   while(flag == -1){{
    int password;
    scanf("%d\n", &password);
    if(password != 1999){
        printf("Wrong\n");
    }else{
        printf("Correct\n");
        flag = 1;

    }
   }}
    return 0;
}