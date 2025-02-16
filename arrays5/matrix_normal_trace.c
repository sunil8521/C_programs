#include <stdio.h>
#include <math.h>
void normalAndTrace(int matrix[3][3], int *trace, float *normal) {
    *trace = 0;
    *normal = 0;
    for(int i = 0; i < 3; i++)
        *trace += matrix[i][i];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            *normal += matrix[i][j] * matrix[i][j];
    *normal = sqrt(*normal);
}
int main() {
    int matrix[3][3], trace;
    float normal;
    printf("Enter 3x3 matrix: ");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    normalAndTrace(matrix, &trace, &normal);
    printf("Trace: %d, Normal: %.2f\n", trace, normal);
    return 0;
}