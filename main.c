#include <stdio.h>

void deleteAtBeginning(int arr[], int *size) {
    if (*size <= 0) {
        printf("Array is empty.\n");
        return;
    }
    for (int i = 0; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--; // Decrease size
}

void deleteAtMiddle(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--; // Decrease size
}

void deleteAtEnd(int arr[], int *size) {
    if (*size <= 0) {
        printf("Array is empty.\n");
        return;
    }
    (*size)--; // Decrease size
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {1, 2, 3, 4, 8};
    int size = 5;

    printf("Original array: ");
    printArray(arr, size);

    deleteAtBeginning(arr, &size);
    printf("After deleting the beginning: ");
    printArray(arr, size);

    deleteAtMiddle(arr, &size, 2);
    printf("After deleting at the middle: ");
    printArray(arr, size);

    deleteAtEnd(arr, &size);
    printf("After deleting at the end: ");
    printArray(arr, size);

    return 0;
}
