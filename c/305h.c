#include <stdio.h>
#include <stdlib.h>

void replace_negatives(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = abs(arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, 5};
    int size = sizeof(arr) / sizeof(int);

    printf("Eredeti tomb: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    replace_negatives(arr, size);

    printf("Modositott tomb: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}