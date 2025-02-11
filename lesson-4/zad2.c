#include <stdio.h>

int main(void) {
    int a = 12, b = 18;
    int lcm = (a > b) ? a : b;
    while(1){
        if (lcm % a == 0 && lcm % b == 0) {
            printf("Най-малкото общо кратно е: %d", lcm);
            break;
        }
        lcm++;
    }
}
