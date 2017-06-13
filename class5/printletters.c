#include<stdio.h>
#include<stdlib.h>

int main () {
  int num, ii;
  char start, end;
  char c;
  char buffer[100];

  printf ("How many letters do you want to print? ");
  fgets(buffer, 99, stdin);
  num = atoi(buffer);
  printf ("What is the starting letter? ");
  fgets(buffer, 99, stdin);
  start = buffer[0];
  printf ("What is the ending letter? ");
  fgets(buffer, 99, stdin);
  end = buffer[0];
  
  for(ii=0;ii<num;ii++) {
     c = start + (ii % (end-start+1));
     putc(c, stdout);
  } 
  printf ("\n");
  return 0;
}
