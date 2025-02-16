#include <stdio.h>
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}
int main() {
    int num, found = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
            found = 1;
            break;
        }
    }
    if (!found) printf("%d cannot be expressed as sum of two primes.\n", num);
    return 0;
}