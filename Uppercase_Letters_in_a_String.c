#include<stdio.h>
int main (){
	char str[100];
	int i,upr=0;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++){
	    if(str[i]>='A' && str[i]<='Z'){
	        upr++;
	        
	    }
	}  
        printf("%d",upr);
	
	
	
}