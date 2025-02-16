#include <stdio.h>
#define SIZE 3
void rotateMatrix(int matrix[SIZE][SIZE]) {
    for(int i = 0; i < SIZE / 2; i++)
        for(int j = i; j < SIZE - i - 1; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[SIZE - j - 1][i];
            matrix[SIZE - j - 1][i] = matrix[SIZE - i - 1][SIZE - j - 1];
            matrix[SIZE - i - 1][SIZE - j - 1] = matrix[j][SIZE - i - 1];
            matrix[j][SIZE - i - 1] = temp;
        }
}
int main() {
    int matrix[SIZE][SIZE];
    printf("Enter 3x3 matrix: ");
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            scanf("%d", &matrix[i][j]);

    rotateMatrix(matrix);
    printf("Rotated matrix:\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    return 0;
}