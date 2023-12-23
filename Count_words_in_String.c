#include<stdio.h>

int main() {
    char str[100];
    scanf("%[^
]s", str);
    int words = 0, i = 0;
    int inWord = 0;

    while (str[i] != NULL) {
    
        if (str[i] == ' ') {
            inWord = 0;
        } else if (inWord == 0) {
        
            inWord = 1;
            words++;
        }
        i++;
    }

    printf("%d", words);


}
