#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

int main() {
    Complex a, b, sum;
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &a.real, &a.imag);
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &b.real, &b.imag);
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}
