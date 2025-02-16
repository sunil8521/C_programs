#include <stdio.h>
int main() {
    int i, j, num = 1, rows, total;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    total = rows * (rows + 1) / 2;
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", total--);
        }
        printf("\n");
    }
    return 0;
}