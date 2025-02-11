#include <stdio.h>

#define DEBUG(X) "Variable " #X " = %d, File: %s, Line: %d\n", (X), __FILE__, __LINE__

int main(void){
    int X = 5;
    printf(DEBUG(X));
}