#include <stdio.h>
void rotateArray(int arr[], int n, int k) {
    k %= n;
    int temp[k];
    for(int i = 0; i < k; i++) temp[i] = arr[i];
    for(int i = 0; i < n - k; i++) arr[i] = arr[i + k];
    for(int i = 0; i < k; i++) arr[n-k+i] = temp[i];
}
int main() {
    int n, k;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("Enter rotation count: ");
    scanf("%d", &k);
    rotateArray(arr, n, k);

    printf("Rotated array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}