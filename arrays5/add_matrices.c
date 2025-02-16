#include <stdio.h>
#define SIZE 3
void addMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            result[i][j] = A[i][j] + B[i][j];
}
int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], result[SIZE][SIZE];
    printf("Enter first matrix: ");
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            scanf("%d", &A[i][j]);
    
    printf("Enter second matrix: ");
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            scanf("%d", &B[i][j]);

    addMatrices(A, B, result);
    printf("Sum of matrices:\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}