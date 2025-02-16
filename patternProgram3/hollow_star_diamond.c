#include <stdio.h>
int main() {
    int i, j, space, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) printf(" ");
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) printf("*"); else printf(" ");
        }
        printf("\n");
    }
    for (i = rows - 1; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++) printf(" ");
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) printf("*"); else printf(" ");
        }
        printf("\n");
    }
    return 0;
}