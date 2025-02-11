#include <stdio.h>

#define FUNCTION(a, b)\
 a > b ? a: b;

int main(void){
    int x = 3;
    int y = 5;
    int max = FUNCTION(x, y)

    printf("%d", max);
}