#include<stdio.h>
int main () {
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int osum=0;
	for(i=0;i<n;i++){
	    
	   if(a[i]%2!=0) { 
	  osum=osum+a[i];	
	}
	}
	printf("%d",osum);
}