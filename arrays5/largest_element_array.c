#include <stdio.h>
int main() {
    int n, max;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    for(int i=1; i<n; i++)
        if(arr[i] > max) max = arr[i];
    printf("Largest element: %d\n", max);
    return 0;
}