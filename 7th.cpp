#include <stdio.h>
#define MAX_SIZE 100
int insert(int arr[], int *size, int element, int position) {
    if (*size >= MAX_SIZE) {
        printf("Array is full, cannot insert.\n");
        return 0;
    }
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return 0;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}
int delete(int arr[], int *size, int position) {
    if (*size <= 0) {
        printf("Array is empty, cannot delete.\n");
        return 0;
    }
    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion.\n");
        return 0;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
int display(int arr[], int size) {
    if (size <= 0) {
        printf("Array is empty.\n");
        return 0;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[MAX_SIZE];
    int size = 0;
    insert(arr, &size, 10, 0);
    insert(arr, &size, 20, 1);
    insert(arr, &size, 30, 2);
    display(arr, size);
    delete(arr, &size, 1);
    display(arr, size);
    return 0;
}