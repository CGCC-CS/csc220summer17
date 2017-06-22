#include<stdio.h>
#include<string.h>

#define ENCRYPT 0
#define DECRYPT 1

/* To compile:
     gcc -ansi -pedantic -Wall easyencrypt.c -o decrypt
     gcc -ansi -pedantic -Wall easyencrypt.c -o encrypt
*/

unsigned int easyencrypt(char c) { return c + 1; }
unsigned int easydecrypt(char c) { return c - 1; }

int main(int argc, char * argv[]) {
  int c;
  char op = ENCRYPT;

  /* Determine what operation to perform based on the command name */  
  if (strncmp(argv[0], "./decrypt", 8) == 0) {
    op = DECRYPT;
  }

  while ( (c = getc(stdin)) != EOF) {
    if (op == DECRYPT) {
      printf("%c", easydecrypt(c));
    }
    else {
      printf("%c", easyencrypt(c));
    }
    c++;
  }

  printf("\n");
  return 0;
}
