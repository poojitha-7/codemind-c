#include<stdio.h>
int main () {
    int a,b,i,x,y,d=0;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    for(i=a;i<=b;i++){
        if(i%x==0 &&i%y!=0){
            d=d+i;
        }
    }
    printf("%d",d);
}