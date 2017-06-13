#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 85

void chomp(char * ptr) {
   while (*ptr != '\n') 
     ptr++;
   *ptr='\0';
}

int add_ascii(char * ptr) {
   int sum = 0;
   while (*ptr != '\0')  {
     sum = sum+*ptr;
     ptr++;
   }
   return sum;
}

int main() {
  FILE *infile, *outfile;
  char buffer[SIZE];  
  char outstring[SIZE];  

  infile = fopen("names.txt", "r");  
  outfile = fopen("output.txt", "w");  
  while ( fgets(buffer, SIZE, infile) ) {
    chomp(buffer);
    /* If we see "Bigfoot", quit! */
    if (strncmp(buffer, "Bigfoot", SIZE) == 0) {
       printf ("We saw Bigfoot, bye!\n");
       exit(2);
    }
    sprintf(outstring, "Name: %s ASCII total: %d\n", buffer, add_ascii(buffer));
    fputs(outstring, outfile);
  }

  fclose(infile);
  fclose(outfile);
  return 0;
}
