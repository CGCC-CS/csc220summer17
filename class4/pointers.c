#include<stdio.h>

int main() {
  int x = 20, y=4000, z = 0;
  int * p = &x;

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
  *p = 30;  /* *p is an alias z, so z=30 */
  printf("z: %10d, %p, %d\n", z, (void *) &z, sizeof(z));
  printf("p: %10p, %p, %d  (value of *p = %d)\n", (void *) p, (void *) &p, sizeof(p), *p);

  (*p)++;
  printf("z: %10d, %p, %d\n", z, (void *) &z, sizeof(z));
  printf("p: %10p, %p, %d  (value of *p = %d)\n", (void *) p, (void *) &p, sizeof(p), *p);

  /* ++ has precedence over * */
  *p++;
  printf("z: %10d, %p, %d\n", z, (void *) &z, sizeof(z));
  printf("p: %10p, %p, %d  (value of *p = %d)\n", (void *) p, (void *) &p, sizeof(p), *p);

  *(--p)=50;
  printf("z: %10d, %p, %d\n", z, (void *) &z, sizeof(z));
  printf("p: %10p, %p, %d  (value of *p = %d)\n", (void *) p, (void *) &p, sizeof(p), *p);

  return 0;
}
