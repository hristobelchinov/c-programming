#include <stdio.h>

#define COMMAND(name, type) type##_##name##_command

#define DEFINE_COMMAND(name, type) void COMMAND(name, type)(void)

DEFINE_COMMAND(quit, internal) {
    printf("Internal quit command \n");
}

DEFINE_COMMAND(start, external) {
    printf("External start command \n");
}

int main(void) {
    internal_quit_command();
    external_start_command();
}
