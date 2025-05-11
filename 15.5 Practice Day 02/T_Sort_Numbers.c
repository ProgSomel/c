#include<stdio.h>
#include<limits.h>
void sortedNumbers(int x, int y, int z){
    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }
    if(y > z){
        int temp = y;
        y = z;
        z = temp;
    }
     if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }

    printf("%d\n%d\n%d\n", x, y, z);
    printf("\n");

}
    
int main(){ 
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sortedNumbers(a, b, c);
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}