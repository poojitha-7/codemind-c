#include<stdio.h>
int main () {
    int n,c=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s=0;
    for(i=0;i<n;i++){
        s+=a[i];
    }
    int avg=s/n;
    for(i=0;i<n;i++){
        if(a[i]<=avg){
        
            c++;
        }
    }
    printf("%d",c);
    
}