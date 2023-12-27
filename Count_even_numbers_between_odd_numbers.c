#include <stdio.h>

int main() {
    int n, i, c= 0;
    scanf("%d", &n);
    int a[n];

    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int o= 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            o = 1; 
        } else if (a[i] % 2 == 0 && o== 1) {
            c++;
        }
    }

    printf("%d",c);

    
}
