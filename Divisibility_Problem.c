#include <stdio.h>

int main() {
    int a ,b;
    scanf("%d%d",&a,&b);
    
    int moves = 0;
    if (a % b != 0) {
        moves = b - (a % b);
    }
    
    printf("%d", moves); 

}
