#include<stdio.h>
int psqrt(int n);
int main () {
    int n;
    scanf("%d",&n);
    if(psqrt(n)){
        printf("True");
    } else {
        printf("False");
    }
}
int psqrt(int n){
    int i=1;
    while(n>0){
        n-=i;
        i+=2;
    }
    if(n==0){
        return 1;
    } else {
        return 0;
    }
    
    
}