#include<stdio.h>
#include"myfunctions.h"

extern int myNum;

int main() {
  int a=10, b=20;
  printf("SIZE=%d\n", SIZE);
  printf("MULTIPLE=%d\n", MULTIPLE);
  printf ("myNum = %d, a=%d\n", myNum, a);
  init();
  addone(a);
  printf ("myNum = %d, a=%d\n", myNum, a);
  doubleIt(&a);
  printf ("myNum = %d, a=%d\n", myNum, a);
  printf("10! = %d\n", factorial(10)); 
  printf ("myNum = %d, a=%d\n", myNum, a);

  printf ("MAX(A,B) = %d\n", MAX(a,b));
  a=30;
  printf ("MAX(A,B) = %d\n", MAX(a,b));

  return 0;
}
