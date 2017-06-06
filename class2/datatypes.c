#include<stdio.h>
#include<limits.h>

int main() {
  char c;
  int i = 10;
  unsigned int ui = 10;
  
  /* char  */
  printf ("Characters\n");
  c = 'a';    /* Character literal */
  printf("1. char: %d %c\n", c, c);
  c++;             /* Arithmetic */
  printf("2. char: %d %c\n", c, c);
  c = 67;          /* Integer literal */
  printf("3. char: %d %c\n", c, c);
  c = 070;          /* Octal literal */
  printf("4. char: %d %c\n", c, c);
  c = 0x58;         /* Hexidecimal literal */
  printf("5. char: %d %c\n", c, c);
  c = 65;   
  printf("6. char: %d %o %x %c\n", c, c, c, c);

  /* int */
  printf ("\n\nIntegers\n");
  printf("1. integer: i: %d   ui: %u\n", i, ui);
  i = -10;
  ui = -10;
  printf("2. integer: i: %d   ui: %u\n", i, ui);
  printf("X. integer: i: %u   ui: %d\n", i, ui);  /* Careful! */


  printf("\nData types:\n");
  printf("         char:\tsize=%d\tmin=%d,\t\tmax=%d\n", sizeof(c), CHAR_MIN, CHAR_MAX);
  printf("          int:\tsize=%d\tmin=%d,\tmax=%d\n", sizeof(int), INT_MIN, INT_MAX);
  printf("        short:\tsize=%d\tmin=%d,\t\tmax=%d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
  printf("         long:\tsize=%d\tmin=%ld,\tmax=%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
  printf("unsigned long:\tsize=%d\tmax=%lu\n", sizeof(unsigned long), ULONG_MAX);
  printf("        float:\tsize=%d\n", sizeof(float));
  printf("       double:\tsize=%d\n", sizeof(double));

  return 0;
}

