#include<stdio.h>
int main (){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int esum=0,osum=0;
	for(i=0;i<n;i++){
	  if(i%2==0){
	      esum+=a[i];
	  }else {
	      osum+=a[i];
	  }
	}
	if(esum>osum){
	    printf("%d",esum-osum);
	} else {
	    printf("%d",osum-esum);
	}
}