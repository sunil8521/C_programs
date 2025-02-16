#include <stdio.h>
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    for(int i = 0; i < n1; i++) merged[i] = arr1[i];
    for(int i = 0; i < n2; i++) merged[n1 + i] = arr2[i];
}
int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter first array elements: ");
    for(int i=0; i<n1; i++) scanf("%d", &arr1[i]);
    
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter second array elements: ");
    for(int i=0; i<n2; i++) scanf("%d", &arr2[i]);

    int merged[n1 + n2];
    mergeArrays(arr1, n1, arr2, n2, merged);
    printf("Merged array: ");
    for(int i=0; i<n1+n2; i++) printf("%d ", merged[i]);
    printf("\n");
    return 0;
}