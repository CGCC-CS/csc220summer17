#include<stdio.h>

unsigned int easydecrypt(char c);

int main() {
  int c;

  while ( (c = getc(stdin)) != EOF) {
    printf("%c", easydecrypt(c));
    c++;
  }

  printf("\n");
  return 0;
}


unsigned int easydecrypt(char c){
  return c - 1;
}
  
