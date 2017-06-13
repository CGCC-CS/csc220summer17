#include <stdio.h>
#include <string.h>

typedef union {
  int x;
  char s[12];
} my_union_t;

int main () {
  my_union_t u;

  printf ("sizeof(u)=%d\n", sizeof(u));
  strncpy(u.s, "Hello!", 12);
  printf ("After assignment: sizeof(u)=%d, strlen(u.s)=%d\n", sizeof(u), strlen(u.s));
  printf ("u.s = %s\n", u.s);
  u.x = 30;
  printf ("u.x = %d\n", u.x);
  u.x = 0x21576f57;
  printf ("u.x = %d\n", u.x);
  printf ("u.s = %s\n", u.s);

  return 0;
}

