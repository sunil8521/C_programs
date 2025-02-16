#include <stdio.h>
int main() {
    int n;
    float sum = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Average: %.2f\n", sum / n);
    return 0;
}