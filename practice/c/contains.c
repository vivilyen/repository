#include <stdbool.h>
#include <stdio.h>

bool contains(int arr[], int len, int elem) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == elem) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    int elem;
    printf("Adjon meg egy szamot: ");
    scanf("%d", &elem);
    if (contains(arr, len, elem)) {
        printf("%d benne van a tombben.\n", elem);
    } else {
        printf("%d nincs benne a tombben.\n", elem);
    }
    return 0;
}