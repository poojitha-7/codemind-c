#include<stdio.h>
int main () {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c,b,sum=0;
    scanf("%d%d",&c,&b);
    for(i=0;i<n;i++)
    {
      if(a[i]<c || a[i]>b){
          sum+=a[i];
      }  
      
    }
    printf("%d",sum);
}