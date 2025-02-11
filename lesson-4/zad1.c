#include <stdio.h>

#define SQUARE_SUM(A, B) (A + B) * (A + B)

int main(void) {
    int a = 3, b = 4;
    int result = SQUARE_SUM(a, b);

    printf("Резултатът е %d", result);}
