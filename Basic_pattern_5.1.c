#include <stdio.h>

int main() {
    int n,i,j,k;

    
    scanf("%d", &n);

    for ( i = 1; i <=n; i++) {
        for ( j = 1; j <=i; j++) {
            printf("%d", i);
        }
       
        for ( k = i + 1; k <=n; k++) {
            printf("*");
        }
        printf("
");
    }

    
}
