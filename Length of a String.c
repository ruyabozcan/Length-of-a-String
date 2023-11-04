#include <stdio.h>
#include <string.h>

int main(void) {
  int length(char[]);
  int lengthV2(char *);
  char s1[]="Shahram";
  printf("The length of %s is %d",s1,strlen(s1));
  return 0;
}

int length(char str[]){
  int len=0;
  for(int i=0;str[i];i++)
     len++;
  return len;
}
//---------------
int lengthV2(char *str){
  int len=0;
  while(*str!='\0'){
     len++;
     str++;
  }
  return len;
}
