#include<stdio.h>

int main() {
    char str[100];
    scanf("%[^
]s", str);

    int i, count = 0;
    for(i = 0; str[i] != NULL; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            count += str[i] - '0'; 
        } 
    }
    printf("%d
", count);

}
