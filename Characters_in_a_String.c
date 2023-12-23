#include<stdio.h>
int main (){
	char str[20];
	int i,len=0;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++){
	    len++;
	}
	printf("%d",len);
	
}