#include <stdio.h>
int main() {
    int num, square, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    square = num * num;
    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }
    if (sum == num) printf("Neon Number\n");
    else printf("Not a Neon Number\n");
    return 0;
}