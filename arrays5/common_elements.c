#include <stdio.h>
void findCommonElements(int arr1[], int n1, int arr2[], int n2) {
    printf("Common elements: ");
    for(int i = 0; i < n1; i++)
        for(int j = 0; j < n2; j++)
            if(arr1[i] == arr2[j])
                printf("%d ", arr1[i]);
    printf("\n");
}
int main() {
    int n1, n2;
    printf("Enter first array size: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter first array elements: ");
    for(int i=0; i<n1; i++) scanf("%d", &arr1[i]);

    printf("Enter second array size: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter second array elements: ");
    for(int i=0; i<n2; i++) scanf("%d", &arr2[i]);

    findCommonElements(arr1, n1, arr2, n2);
    return 0;
}