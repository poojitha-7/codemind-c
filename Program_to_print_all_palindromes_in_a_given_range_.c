#include<stdio.h>
int rev(int n){
    int r,rev=0;
    int t=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==t){
        return 1;
    } else {
        return 0;
    }
}
int main () {
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
          if(rev(i)) {
              printf("%d ",i);
          }
    }
}