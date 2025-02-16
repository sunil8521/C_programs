#include <stdio.h>
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr1[i]);

    for(int i=0; i<n; i++) arr2[i] = arr1[i];

    printf("Copied array: ");
    for(int i=0; i<n; i++) printf("%d ", arr2[i]);
    printf("\n");
    return 0;
}