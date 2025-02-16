#include <stdio.h>
int removeOccurrences(int arr[], int n, int x) {
    int j = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] != x)
            arr[j++] = arr[i];
    return j;
}
int main() {
    int n, x;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    
    printf("Enter element to remove: ");
    scanf("%d", &x);
    n = removeOccurrences(arr, n, x);
    
    printf("Array after removal: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}