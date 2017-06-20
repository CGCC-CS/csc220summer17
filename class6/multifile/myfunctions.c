#include<stdio.h>
#include"myfunctions.h"

int myNum = 0;

void init(void) {
  printf("initializing, myNum = %d\n", myNum);
}

int addone(int n) {
  myNum++;
  return (n+1);
}

void doubleIt(int * n) {
  myNum *= 2;
  *n = *n * 2;
}

int factorial(int n) {
  myNum ++;
  if (n <= 1)
    return 1;
  else
    return (n * factorial(n-1));
}
