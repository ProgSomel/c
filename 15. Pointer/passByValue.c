#include<stdio.h>
void func( int x){

    x = 20;
    printf("%p\n", &x); //? 0x16b79abdc

}
int main(){

    int x = 10;
    func(x);
    printf("%d\n", x); //? 10
    printf("%p\n", &x); //? 0x16b79ac08
    return 0;
}