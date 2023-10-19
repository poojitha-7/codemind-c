#include<stdio.h>
int main () {
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int bags=(n+(k*m)-1)/(k*m);
    printf("%d",bags);
}