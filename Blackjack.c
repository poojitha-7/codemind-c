#include<stdio.h>
int main () 
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    d=a+b;
    c=21-d;
    if(c>=1 && c<=10){
        printf("%d",c);
    } else {
        printf("-1");
    }
}