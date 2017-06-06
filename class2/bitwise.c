#include<stdio.h>

int main() {

    unsigned int i = 8;

    printf("\nBit shift\n");
    printf("i = %x\n", i);
    i = i << 2;
    printf("i = %x\n", i);
    i = i >> 4;
    printf("i = %x\n", i);
    i = i << 2;
    printf("i = %x\n", i);
    printf("\nBitwise operators\n");
    printf("i = %x\n", i & 1);  /* logical and */
    printf("i = %x\n", i | 1);  /* logical or */
    printf("i = %x\n", i ^ 1);  /* logical xor */
    printf("i = %x\n", i & 9);
    printf("i = %x\n", i | 9);
    printf("i = %x\n", i ^ 9);

    return 0;
}

