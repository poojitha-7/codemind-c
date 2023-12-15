#include<stdio.h>
int main (){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int z;
	scanf("%d",&z);
int c=0;
	for(i=0;i<n;i++){
	   if(z==a[i]){
	      c++; 
	      
	   }
	}
	printf("%d",c);
	
}