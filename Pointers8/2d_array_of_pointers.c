#include <stdio.h>
int main() {
    int rows = 2, cols = 2;
    int *arr[2][2];
    int a = 1, b = 2, c = 3, d = 4;
    arr[0][0] = &a; arr[0][1] = &b;
    arr[1][0] = &c; arr[1][1] = &d;
    printf("Element at [1][1]: %d\n", *arr[1][1]);
    return 0;
}