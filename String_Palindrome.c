#include<stdio.h>
#include<string.h>
int  main (){
	char str[20],str1[20];
	scanf("%[^
]s",str);
	strcpy(str1,str);
	int i=0,t;
	int j=strlen(str)-1;
	
	while(i<=j){
		t=str1[i];
		str1[i]=str1[j];
		str1[j]=t;
		i++;
		j--;
	}
	int res=strcmp(str,str1);
	if(res==0){
	    printf("Palindrome");
	} else {
	    printf("Not Palindrome");
	}

}