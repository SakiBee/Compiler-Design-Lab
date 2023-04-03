#include <stdio.h>
int main() {
  char str[1000];
  gets(str);
  int len = strlen(str), i;
  bool invalid = 0;
  if(str[0] == 'b') {
    int i = 0;
    while(i < len and str[i] == 'b') i++;
    if(i != len) invalid = 1;
  }
  else {
    i = 0; 
    while(i < len and str[i] == 'a') i++;
    while(i < len and str[i] == 'b') i++;
    if(i != len) invalid = 1;    
  }

  if(invalid) printf("Invalid String");
  else printf("This string is recognized under 'a*b+'\n");
}
