#include <stdio.h>
struct Complex {
    float real, imag;
};
struct Complex add(struct Complex c1, struct Complex c2) {
    struct Complex sum = {c1.real + c2.real, c1.imag + c2.imag};
    return sum;
}
int main() {
    struct Complex c1 = {3.4, 5.2}, c2 = {2.6, 4.8};
    struct Complex sum = add(c1, c2);
    printf("Sum: %.1f + %.1fi\n", sum.real, sum.imag);
    return 0;
}