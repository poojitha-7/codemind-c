#include<stdio.h>
int  main()
{
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d
",&a[i][j]);
        }
    }
    int esum=0,osum=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]%2==0){
                esum+=a[i][j];
            } else {
                osum+=a[i][j];
            }
        }
    }
    printf("%d %d",esum,osum);
}    