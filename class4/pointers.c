#include<stdio.h>

int main () {
  int x = 20, y=4000, z = 0;
  int* p = &x;

  /* The '*' in this line and the next 3 lines mean 4 different things! */
  int* pointer_type = &y;  /* The '*' indicates this is a pointer type */
  *pointer_type = 4000;    /* The '*' is the dereference operator */ 
  x = 10 * 2;              /* The '*' is the multiplication operator */

  /* print value, address, & size of each variable */
  printf("x: %10d, %p, %d\n", x, (void *) &x, sizeof(x));
  printf("y: %10d, %p, %d\n", y, (void *) &y, sizeof(y));
  printf("z: %10d, %p, %d\n", z, (void *) &z, sizeof(z));
  printf("p: %10p, %p, %d  (value of *p = %d)\n", (void *) p, (void *) &p, sizeof(p), *p);

  printf("\np++ makes p point to the next integer\n");
  p++;
  printf("p: %10p, %p, %d  (value of *p = %d)\n", (void *) p, (void *) &p, sizeof(p), *p);


  printf("\nUse p to change z\n");
  p = &z;   /* p holds the address of z */
  *p = 30;  /* p is an alias of z, so z=30 */
  printf("z: %10d, %p, %d\n", z, (void *) &z, sizeof(z));
  printf("p: %10p, %p, %d  (value of *p = %d)\n", (void *) p, (void *) &p, sizeof(p), *p);

  printf("\n(*p)++\n");
  (*p)++;
  printf("z: %10d, %p, %d\n", z, (void *) &z, sizeof(z));
  printf("p: %10p, %p, %d  (value of *p = %d)\n", (void *) p, (void *) &p, sizeof(p), *p);
 
  printf("\n*p++\n");
  *p++;
  printf("z: %10d, %p, %d\n", z, (void *) &z, sizeof(z));
  printf("p: %10p, %p, %d  (value of *p = %d)\n", (void *) p, (void *) &p, sizeof(p), *p);
 
  printf("\n*(--p)=50\n");
  *(--p)=50;
  printf("z: %10d, %p, %d\n", z, (void *) &z, sizeof(z));
  printf("p: %10p, %p, %d  (value of *p = %d)\n", (void *) p, (void *) &p, sizeof(p), *p);
 
  printf("\np=&x\n");
  printf("(*(++p))++\n");
  p=&x;
  (*(++p))++;
  printf("x: %10d, %p, %d\n", x, (void *) &x, sizeof(x));
  printf("y: %10d, %p, %d\n", y, (void *) &y, sizeof(y));
  printf("z: %10d, %p, %d\n", z, (void *) &z, sizeof(z));
  printf("p: %10p, %p, %d  (value of *p = %d)\n", (void *) p, (void *) &p, sizeof(p), *p);
  return 0;
}
