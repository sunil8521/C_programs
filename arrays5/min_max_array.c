#include <stdio.h>
int main() {
    int n, min, max;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    min = max = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    printf("Minimum: %d, Maximum: %d\n", min, max);
    return 0;
}