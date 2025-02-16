#include <stdio.h>

int main() {
    float a, b, product;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    product = a * b;
    printf("Product: %.2f\n", product);
    return 0;
}
