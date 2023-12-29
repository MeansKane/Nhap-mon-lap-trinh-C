#include<stdio.h>
#include<stdlib.h>
#include<string.h	>
int isSym(char s[]){
	for(int i = 0; i < strlen(s) / 2; i++){
		if(s[i] != s[strlen(s) - 1 - i])
			return 0;
	}
	return 1;
}
int main(){
	char s[100]; gets(s);
	if(isSym(s))
		printf("Yes");
	else
		printf("No");
	return 0;
}
