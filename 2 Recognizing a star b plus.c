#include <stdio.h>
int main() {
	char str[1000];
	gets(str);
	if(strcmp(str, "a") == 0) {
		printf("This string is recognized under 'a' and 'a*b+'\n");
	}
	else if(strcmp(str, "abb") == 0) {
		printf("This string is recognized under 'abb' and 'a*b+'\n");
	}
	else {
		int len = strlen(str);
		int i = 0; 
		while(i < len) {
			if(str[i] == 'a') i++;
			else break;
		}
		while(i < len) {
			if(str[i] == 'b') i++;
			else break;
		}
		if(i != len) {
			printf("Invalid String");
		}
		else{
			printf("This string is recognized under 'a*b+'\n");
		}
		
	}
}
