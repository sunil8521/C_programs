#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, nextTerm, sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) sum += t1;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("Sum of even-indexed Fibonacci numbers: %d\n", sum);
    return 0;
}