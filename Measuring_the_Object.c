#include<stdio.h>
int main () {
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    int a=x+y;
    int b=y+z;
    int c=z+x;
    if(w==a || w==b || w==c || w==x || w==y || w==z){
        printf("YES");
    } else {
        printf("NO");
    }
    
}