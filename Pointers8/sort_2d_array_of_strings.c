#include <stdio.h>
#include <string.h>
void sortStrings(char arr[][20], int n) {
    char temp[20];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}
int main() {
    char arr[][20] = {"apple", "banana", "grape", "cherry"};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortStrings(arr, n);
    printf("Sorted Strings:\n");
    for (int i = 0; i < n; i++) printf("%s\n", arr[i]);
    return 0;
}