#include <stdio.h>
#include <math.h>

void raise_to_fourth_power(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = pow(arr[i], 4);
    }
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    raise_to_fourth_power(array, size);

    printf("Array after raising to fourth power:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}
