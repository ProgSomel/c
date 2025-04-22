#include<stdio.h>
#include<string.h>
int main(){

   char a[11];
   char b[11];

   scanf("%s", a);
   scanf("%s", b);

   char c[strlen(a) + strlen(b)];

   printf("%d %d\n", strlen(a), strlen(b));

   for(int i = 0; i < strlen(a); i++){
    c[i] = a[i];
    
   }
   for(int i = 0; i < strlen(b); i++){
    c[i + strlen(a)] = b[i];
   }

   c[strlen(a)+strlen(b)] = '\0';

   printf("%s\n", c);

   char temp = a[0];
   a[0] = b[0];
   b[0] = temp;

   printf("%s %s\n", a, b);


    return 0;
}