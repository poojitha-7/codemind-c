#include<stdio.h>
int main (){
    int x,rev1=0,r1,r2,rev2=0;
    scanf("%d",&x);
    int s1=x*x;
    while(x>0){
        r1=x%10;
        rev1=rev1*10+r1;
        x=x/10;
    } 
    int s2=rev1*rev1;
    while(s2>0){
        r2=s2%10;
        rev2=rev2*10+r2;
        s2=s2/10;
    }
    if(rev2==s1){
        printf("True");
    } else {
        printf("False");
    }
    
    
}