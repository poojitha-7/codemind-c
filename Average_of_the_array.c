#include<stdio.h>
int main (){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	float avg=0,sum=0;
	for(i=0;i<n;i++){
	  sum+=a[i];
	  avg=sum/n;
	}
	printf("%.2f",avg);
}