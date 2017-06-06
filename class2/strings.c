#include<stdio.h>

int main() {
  int ii;
  char buff1[20];
  char s1[] = "Hello";    /* s2 = {'H', 'e', 'l', 'l', 'o', '\0'} */
  char s2[5] = "world";   /* s1 = {'w', 'o', 'r', 'l', 'd'} */
  char s3[] = {'S', 't', 'r', 'i', 'n', 'g', '\0'};
  char buff2[20];

  printf("s1: %s\n", s1);
  printf("s1 %d bytes, s2 is %d bytes\n", sizeof(s1), sizeof(s2));
  printf("s2: %s\n", s2);
  printf("s3: %s\n", s3);

  for (ii=0;ii<12;ii++) {
    printf (" s2[%d]: %c (%d)\n", ii, s2[ii], s2[ii]);
  }

  s1[3] = 'Z';
  s1[5] = 43;
  s1[6] = 'X';
  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);
  printf("s3: %s\n", s3);
  return 0;
}

