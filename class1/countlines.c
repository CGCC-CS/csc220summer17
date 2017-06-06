#include<stdio.h>

int main() {
  int c;
  int nl = 0;

  while ( (c = getchar()) != EOF) {
    if (c == '\n') {
      nl ++;
    }
  }

  printf ("There were %d newlines \n", nl);
  return 0;
}
