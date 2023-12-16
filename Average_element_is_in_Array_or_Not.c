#include<stdio.h>
int main (){
	int n,i,flag=0,sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    
	for(i=0;i<n;i++){
	    sum=sum+a[i];
	}
	 int avg=sum/n;
	 
	for(i=0;i<n;i++){
	    if(avg==a[i]){
	        flag=1;
	    }
	}
	if(flag==1){
		printf("True");
	} else {
		printf("False");
	}
	
	
}