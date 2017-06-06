#include<stdio.h>

#define LEN 20

int main() {
  int ii;
  char buff1[LEN];
  char s1[] = "Hello";    /* s1 = {'H', 'e', 'l', 'l', 'o', '\0'} */
  char s2[5] = "world";   /* s2 = {'w', 'o', 'r', 'l', 'd'} */
  char s3[] = {'S', 't', 'r', 'i', 'n', 'g', '\0'};
  char buff2[LEN];

  for(ii=0;ii<LEN;ii++) {
    buff1[ii]='#';
    buff2[ii]='@';
  }

  printf("buff1: %s\n", buff1);
  printf("s1: %s\n", s1);
  printf("s1 %d bytes, s2 is %d bytes\n", sizeof(s1), sizeof(s2));
  printf("s2: %s\n", s2);
  printf("s3: %s\n", s3);
  printf("buff2: %s\n", buff2);

  for (ii=0;ii<15;ii++) {
    printf (" s2[%d]: %c (%d)\n", ii, s2[ii], s2[ii]);
  }

  /* This might be a problem! */
  /*
  s2[10] = '*';
  printf("s2: %s\n", s2);
  s3[6] = '*';
  printf("s2: %s\n", s2);
  */

  s1[3] = 'Z';
  s1[5] = 43;
  s1[6] = 'X';
  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);
  printf("s3: %s\n", s3);

  return 0;
}

