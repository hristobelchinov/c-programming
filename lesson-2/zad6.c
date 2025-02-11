#include <stdio.h>

#define SWAP(A, B, TYPE)\
    TYPE temp = A;\
    A = B;\
    B = temp;

#define SORT(ARRAY, SIZE, TYPE, COMPARE)\
    for(int i = 0; i<SIZE;i++){\
        for(int j = i+1; j<SIZE;j++){\
            if(ARRAY[i] COMPARE ARRAY[j]){\
                SWAP(ARRAY[i], ARRAY[j], TYPE);\
            }\
        }\
    }\

int main(void){
    int array[] = {5, 2, 9, 1, 6};
    int size = sizeof(array)/sizeof(array[0]);

    printf("In ascending order:\n");
    SORT(array, size, int, >);
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("In descending order:\n");
    SORT(array, size, int, <);
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}
