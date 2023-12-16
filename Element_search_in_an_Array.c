#include<stdio.h>
int main (){
	int n,i,flag=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    int z;
    scanf("%d",&z);
	for(i=0;i<n;i++){
	   if(z==a[i]){
	       flag=1;
	       break;
	   }
	   
	}
	if(flag==1){
		printf("True");
	} else {
		printf("False");
	}
	
	
}