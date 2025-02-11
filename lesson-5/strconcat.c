#include "mystrings.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: ./strconcat.out <string1> <string2>\n");
        return 1;
    }

    if (strlength(argv[1]) > 50 || strlength(argv[2]) > 50) {
        printf("string must not exceed 50 characters.\n");
        return 1;
    }

    char str1[101];
    int i = 0;
    while (argv[1][i] != '\0') {
        str1[i] = argv[1][i];
        i++;
    }
    str1[i] = '\0';

    strconcat(str1, argv[2]);
    printf("%s\n", str1);

    return 0;
}
