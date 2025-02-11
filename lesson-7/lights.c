#include <stdio.h>
unsigned char lightState = 0;

void switchLights(int room) {
    if (room < 1 || room > 8) {
        printf("Invalid room number");
        return;
    }

    lightState ^= (1 << (room - 1));
}

void printState() {
    printf("The light is on in rooms:");
    for (int i = 0; i < 8; i++) {
        if (lightState & (1 << i)) {
            printf(" %d", i + 1);
        }
    }
    printf("\n");
}

int main() {
    int choice, room;

    while (1) {
        printf(" Home Lighting :\n");
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("3. Exit\n");
        printf("Choose an option:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter room number:");
                scanf("%d", &room);
                switchLights(room);
                break;
            case 2:
                printState();
                break;
            case 3:
                printf("Exiting program\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
