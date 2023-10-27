#include<stdio.h>
int main () {
    int n ;
    scanf("%d",&n);
    float i, s=0;
    for( i=1;i<=n;i++) {
       s=s+(1/i);
    }
   printf("%.2f",s);    
}