#include <stdio.h>
int linearSearch(int arr[], int size, int key);
int main() {
    int arr[] = {10, 23, 45, 6, 8, 13, 27, 52, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, index;
    printf("Enter the number to search for: ");
    scanf("%d", &key);
    index = linearSearch(arr, size, key);
    if (index != -1) {
        printf("Number %d found at index %d\n", key, index);
    } else {
        printf("Number %d not found in the array\n", key);
    }
    return 0;
}
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}