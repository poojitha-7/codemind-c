#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n% 2 == 0) {
        return 1; 
    }

    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j || j == (n- i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("
");
    }

    
}
