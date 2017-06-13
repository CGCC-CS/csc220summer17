#include<stdio.h>

#define COUNT 5

void print_array(int ar[], int size) {
  int ii;
  for (ii=0;ii<COUNT;ii++) 
     printf("%d: ar[%d]=%2d\n", ii, ii, ar[ii]);
}

void print_pointer(int *p, int size) {
  int ii;
  for (ii=0;ii<COUNT;ii++) 
     printf("%d: *(p+%d)=%2d\n", ii, ii, *(p+ii));
}

int main () {
  int array[COUNT];   /* int array */
  int * ptr = array;  /* pointer to int */
  int ii;

  printf ("Sizes: array: %d, ptr: %d\n", sizeof(array), sizeof(ptr));

  for (ii=0;ii<COUNT;ii++) 
     array[ii]=ii*10;
  for (ii=0;ii<COUNT;ii++) 
     printf("%d: array[%d]=%2d  *(ptr+%d) = %2d\n", ii, ii, array[ii], ii, *(ptr+ii));

  printf("\nprint_array(array, COUNT)\n");
  print_array(array, COUNT);
  printf("\nprint_array(ptr, COUNT)\n");
  print_array(ptr, COUNT);
  printf("\nprint_array(&array[0], COUNT)\n");
  print_array(&array[0], COUNT);

  printf("\n\nprint_pointer(array, COUNT)\n");
  print_pointer(array, COUNT);
  printf("\nprint_pointer(ptr, COUNT)\n");
  print_pointer(ptr, COUNT);
  printf("\nprint_pointer(&array[0], COUNT)\n");
  print_pointer(&array[0], COUNT);

  /* array indexing */
  printf("\n\narray indexing:\n  ");
  for(ii=0;ii<5;ii++) {
    printf("%d ", array[ii]);
  }
  printf("\n");

  /* pointer arithmetic */
  printf("pointer arithmetic:\n  ");
  for(ii=0;ii<5;ii++) {
    printf("%d ", *(ptr+ii));
  }
  printf("\n");

  /* array indexing with pointer variable */
  printf("\narray indexing with pointer variable:\n  ");
  for(ii=0;ii<5;ii++) {
    printf("%d ", ptr[ii]);
  }
  printf("\n");

  /* pointer arithmetic with an array name */
  printf("pointer arithmetic with an array name:\n  ");
  for(ii=0;ii<5;ii++) {
    printf("%d ", *(array+ii));
  }
  printf("\n");

  printf("Are arrays and pointers the same?\n");
  printf("  size of arr=%d\n", sizeof(array));
  printf("  size of ptr=%d\n", sizeof(ptr));

  ptr=&ii;
  /*
  array=&ii;  Not allowed!
  */

  return 0;
}

