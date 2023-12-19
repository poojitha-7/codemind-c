#include <stdio.h>

int isUgly(int num) {
    if (num <= 0) {
        return 0;
    } else 
    while (num % 2 == 0) {
        num /= 2;
    }
    while (num % 3 == 0) {
        num /= 3;
    }
    while (num % 5 == 0) {
        num /= 5;
    }
      if(num==1){
          return 1;
      } else {
          return 0;
        }
    
}

int main() {
    int number;
    
    scanf("%d", &number);

    if (isUgly(number)) {
        printf("Ugly Number");
    } else {
        printf("Not Ugly Number");
    }

    
}
