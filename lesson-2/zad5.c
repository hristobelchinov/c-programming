#include <stdio.h>

#define SWAP(A, B, TYPE)\
    TYPE temp = A;\
    A = B;\
    B = temp;

int main(void) {
    int x = 5, y = 10;
    SWAP(x, y, int);
    printf("x = %d y = %d", x, y);
}
