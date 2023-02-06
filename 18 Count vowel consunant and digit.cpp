#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char str[100];
	int i, vowel = 0, consonant = 0, digit = 0;
	gets(str);

	for(i=0 ; str[i]!= '\0'; i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
		   str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
			vowel++;
	}
	else if(str[i]>= 'a' && str[i]<='z' || str[i]>= 'A' && str[i]<='Z') {
		consonant++;
	}
	else if(str[i] >= '0' && str[i] <= '9') {
		digit++;
	}
}
printf("Number of vowel = %d\nNumber of consonant = %d\nNumber of digit = %d\n",vowel,consonant,digit);
return 0;
}