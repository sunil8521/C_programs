#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter elements:\n");
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &arr[i][j]);
    printf("2D Array:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}