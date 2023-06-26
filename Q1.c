#include<stdio.h>
main(){
	char str1[20];
	char str2[20];
	
	printf("enter the string:");
	gets(str1);
	
	strcpy(str2,str1);
	strrev(str2);
	
	if(strcmp(str1,str2)==0) {
	printf("This is a palindrome");	
	}
	else printf("This is not a palindrome");
}
