#include <stdio.h>
int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    printf("Boundary elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            if(i == 0 || j == 0 || i == n-1 || j == n-1)
                printf("%d ", matrix[i][j]);
            else
                printf("  ");
        printf("\n");
    }
    return 0;
}