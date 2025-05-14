#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int fr[n];
    for(int i = 0; i < n; i++){
       fr[i] = 0;
    }

    for(int i = 0; i < n; i++){
        fr[a[i]]++;
    }

    for(int i = 1; i <= m; i++){
        printf("%d\n", fr[i]);
    }

    return 0;
}
