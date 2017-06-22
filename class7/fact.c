#include<stdio.h>
#include<stdlib.h>

long int factorial(int n) {
  if (n <= 1) {
    return 1;
  }
  else return(n * factorial(n-1));
}

int main(int argc, char * argv[]) {

  int num = 10;
 
  if (argc > 1) {
    num=atoi(argv[1]); 
  }

  printf("%d! = %ld\n", num, factorial(num));

  return 0;
}
