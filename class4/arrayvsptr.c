#include<stdio.h>

#define COUNT 5

void print_array(int ar[], int size) {
  int ii;
  for (ii=0;ii<COUNT;ii++) 
     printf("%d: ar[%d]=%d\n", ii, ii, ar[ii]);
}

void print_pointer(int *p, int size) {
  int ii;
  for (ii=0;ii<COUNT;ii++) 
     printf("%d: *(p+%d) = %d\n", ii, ii, *(p+ii));
}

int main () {
  int array[COUNT];   /* int array */
  int * ptr = array; /* pointer to int */
  int ii;

  printf ("Sizes: array=%d, ptr = %d\n", sizeof(array), sizeof(ptr));

  for (ii=0;ii<COUNT;ii++) 
     array[ii]=ii*10;
  for (ii=0;ii<COUNT;ii++) 
     printf("%d: array[%d]=%d  *(ptr+%d) = %d\n", ii, ii, array[ii], ii, *(ptr+ii));

  printf("\nprint_array(array, COUNT)\n");
  print_array(array, COUNT);
  printf("\nprint_array(ptr, COUNT)\n");
  print_array(ptr, COUNT);
  printf("\nprint_array(&array[0], COUNT)\n");
  print_array(array, COUNT);

  printf("\nprint_pointer(ptr, COUNT)\n");
  print_pointer(ptr, COUNT);
  printf("\nprint_pointer(array, COUNT)\n");
  print_pointer(array, COUNT);
  printf("\nprint_pointer(&array[0], COUNT)\n");
  print_pointer(&array[0], COUNT);
  return 0;
}
