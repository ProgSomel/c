#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;

    char a[n+1];

    for(int i = 0; i<n; i++){
        scanf("%s", a);
    }

    for(int i = 0; i < n; i++){
        sum+= (a[i]-'0');
    }

    printf("%d", sum);
    
    return 0;
}
