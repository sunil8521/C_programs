#include <stdio.h>
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int main() {
    int lower, upper;
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    printf("Prime numbers between %d and %d:\n", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) printf("%d\n", i);
    }
    return 0;
}