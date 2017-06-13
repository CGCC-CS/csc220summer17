#include <stdio.h>

unsigned int easyencrypt(char c) {
  return c + 1;
}

int main() {
  int c;

  while ( (c = getc(stdin)) != EOF) {
     printf("%c", easyencrypt(c));
     c++;
  }
  printf ("\n");
  return 0;
}
