#include <stdio.h>

#define DEBUG

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void processArray(int* arr, int size) {
    sortArray(arr, size);
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
        }
    }

#ifdef DEBUG
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("Elements on indexes: ");
    for (int i = 1; i < size; i++) {
        if (i % 3 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
#endif

    printf("Sum is: %d\n", sum);
}

int main(void) {
    int arr[] = {10, 5, 8, 3, 12, 7, 6, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    processArray(arr, size);

}
