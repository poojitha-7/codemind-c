#include <stdio.h>

int main() {
    int n,i,j,s;
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (s= n- i; s> 0; s--) {
            printf(" ");
        }
        for (j = i;j >=1; j--) {
            printf("%c ",64+i);
        }

        printf("
");
    }
    
}
