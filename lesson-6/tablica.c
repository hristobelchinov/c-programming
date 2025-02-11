#include <stdio.h>
#include <limits.h>

#define PRINT_TYPE_INFO(type, format) \
    printf("| %-10s | %-10s | %-5zu | %-20d | %-20d | %-10s | %-20u |\n", \
           #type, format, sizeof(type), (int)type##_MAX, (int)type##_MIN, "u"#format, (unsigned int)type##_MAX)

int main() {
    printf("------------------------------------------------------------------------------------------------------------------\n");
    printf("| Type       | Format     | Bytes | Max Signed Value     | Min Signed Value     | Unsigned   | Max Unsigned Value   |\n");
    printf("------------------------------------------------------------------------------------------------------------------\n");

    PRINT_TYPE_INFO(char, "%c");
    PRINT_TYPE_INFO(int, "%d");
    PRINT_TYPE_INFO(short, "%hd");
    PRINT_TYPE_INFO(long, "%ld");
    PRINT_TYPE_INFO(long long, "%lld");

    printf("---------------------------------------------------------------------------------------------------------------------\n");

    return 0;
}
