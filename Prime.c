#include<stdio.h>
int prime(int n);
int main () {
    int n;
    scanf("%d",&n);
    int res=prime(n);
    if(res==1){
        printf("Prime");
    } else {
        printf("Not Prime");
    }
}
int prime(int n) {
    int i,c=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        return 1;
    } else {
        return 0;
    }
}