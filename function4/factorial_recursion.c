#include <stdio.h>
long factorial(int n) {
    return (n == 0) ? 1 : n * factorial(n - 1);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d: %ld\n", num, factorial(num));
    return 0;
}