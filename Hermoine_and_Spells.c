#include<stdio.h>
int main () {
int a,b,c,p;
scanf("%d%d%d",&a,&b,&c);
if(a>c && b>c) {
    p=a+b;
} else if (b>a && c>a) {
    p=b+c;
} else {
    p=a+c;
}
  printf("%d",p);
}