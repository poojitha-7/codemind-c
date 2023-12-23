#include<stdio.h>
int main (){
	char str[20];
	int i,vol=0;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++){
	    if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
	        vol++;
	    }
	}
	printf("%d",vol);
	
}