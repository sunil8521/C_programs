#include <stdio.h>
int main() {
    int octal, decimal = 0, base = 1, rem;
    printf("Enter an octal number: ");
    scanf("%o", &octal);
    printf("Octal to Decimal: %d\n", octal);
    return 0;
}