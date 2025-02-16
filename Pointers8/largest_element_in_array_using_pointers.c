#include <stdio.h>
int findLargest(int *arr, int size) {
    int *largest = arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *largest)
            largest = arr + i;
    }
    return *largest;
}
int main() {
    int arr[] = {10, 25, 35, 5, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Largest Element: %d\n", findLargest(arr, size));
    return 0;
}