#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 100

void chomp(char * ptr) {
  while(*ptr != '\n') {
    ptr++;
  }
  *ptr='\0';
}

int add_ascii(char * ptr) {
  int sum=0;
  while(*ptr != '\0') {
    sum = sum + *ptr;
    ptr++;
  }
  return sum;
}

int main() {
  FILE *infile, *outfile;
  char buffer[SIZE];
  char outstring[SIZE];
  int ii = 1;

  infile = fopen("names.txt", "r");
  outfile = fopen("outupt.txt", "w");
  while ( fgets(buffer, SIZE, infile) ) {
     chomp(buffer);
     /* Quit if we see Bigfoot */
     if (strncmp(buffer, "Bigfoot", SIZE) == 0) {
       break;
     }
     printf("%2d: %s\n", ii, buffer);
     sprintf(outstring, "Name=%s   ASCII total: %d\n", buffer, add_ascii(buffer));
     fputs(outstring, outfile);
     ii++;
  }

  fclose(infile);
  fclose(outfile);

  return 0;
}
