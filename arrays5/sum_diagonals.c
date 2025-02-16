#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for(int i = 0; i < n; i++)
        sum += matrix[i][i] + (i != n-i-1 ? matrix[i][n-i-1] : 0);

    printf("Sum of diagonals: %d\n", sum);
    return 0;
}