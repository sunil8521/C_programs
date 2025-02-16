#include <stdio.h>
#include <math.h>
int binaryToDecimal(long long bin) {
    int decimal = 0, i = 0, rem;
    while (bin != 0) {
        rem = bin % 10;
        bin /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
    return decimal;
}
int main() {
    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    printf("Binary to Decimal: %d\n", binaryToDecimal(binary));
    return 0;
}