#include <stdio.h>
#include "quadraticroots.h"

int main() {
    QuadraticRootsResult result1 = findroots(1, -3, 2);
    if (result1.norealroots) {
        printf("No real roots\n");
    } else {
        printf("roots: x1 = %.2Lf, x2 = %.2Lf\n", result1.x1, result1.x2);
    }

    QuadraticRootsResult result2 = findroots(1.0f, -2.5f, 1.0f);
    if (result2.norealroots) {
        printf("No real roots\n");
    } else {
        printf("Roots: x1 = %.2Lf, x2 = %.2Lf\n", result2.x1, result2.x2);
    }

    QuadraticRootsResult result3 = findroots(1.7, 2.8, 5.4);
    if (result3.norealroots) {
        printf("No real roots.\n");
    } else {
        printf("rRoots: x1 = %.2Lf, x2 = %.2Lf\n", result3.x1, result3.x2);
    }

    return 0;
}
