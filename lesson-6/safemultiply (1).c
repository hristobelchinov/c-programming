#include <stdio.h>
#include "safeint.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }
    SafeResult result = safestrtoint(argv[1]);
    if (result.errorflag) {
        printf("Error: Invalid number %s\n", argv[1]);
        return 1;
    }
    int num1 = result.value;

    result = safestrtoint(argv[2]);
    if (result.errorflag) {
        printf("Error: Invalid number %s\n", argv[2]);
        return 1;
    }
    int num2 = result.value;

    result = safemultiply(num1, num2);
    if (result.errorflag) {
        printf("Error: Overflow\n");
    } else {
        printf("Result: %d\n", result.value);
    }
    return 0;
}
