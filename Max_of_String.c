#include <stdio.h>

int main() {
    char str[100]; 
    
    scanf("%[^
]s", str); 

    char maxchar = NULL;

    int i = 0;
    while (str[i] != NULL) {
        if (str[i] > maxchar) {
            maxchar = str[i]; 
        }
        i++;
    }
printf("%c",maxchar);
    
}
