#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]) {
  int ii;
  int sum = 0;;

  /* skip the argv[0] since it is the filename */
  for(ii=1;ii<argc;ii++) {
    sum = sum + atoi(argv[ii]);
  }

  printf ("%d\n", sum);
  return 0;
}
