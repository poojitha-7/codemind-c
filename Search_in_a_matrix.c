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
    int f,flag=0;
    scanf("%d",&f);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(f== a[i][j]){
               flag=1; 
            }
        }
    }
    if(flag==1){
        printf("1");
    } else {
        printf("0");
    }    
}