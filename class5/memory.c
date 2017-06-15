#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* To compile: gcc -ansi -pedantic -Wall memory.c -lm */

int main (int argc, char *argv[]) {
  int ii;
  int sum = 0;
  double sum_sqrt = 0.0;
  int size = 10;
  int * numbers;

  /* Take a size as a command line paramter */
  if (argc > 1) {
    size = atoi(argv[1]);
  }

  /* allocate an array of numbers */
  numbers = (int *) malloc(size * sizeof(int));

  for(ii=0;ii<size;ii++) {
    numbers[ii] = rand() % 100 + 1;  /* random beween 1 & 100 */
  }

  for(ii=0;ii<size;ii++) {
    sum += numbers[ii];
    sum_sqrt += sqrt(numbers[ii]);
  }

  for(ii=0;ii<size;ii++) {
    printf ("%d ", numbers[ii]);
  }

  printf ("\nSum = %d\n", sum);
  printf ("Sum of square roots = %f\n", sum_sqrt);
  free(numbers);
  numbers = NULL;
  return 0;
}

