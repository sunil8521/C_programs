#include <stdio.h>
#include <math.h>
int main() {
    int lower, upper, num, original, remainder, n, result;
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    printf("Armstrong numbers between %d and %d:\n", lower, upper);
    for (num = lower; num <= upper; num++) {
        original = num;
        n = 0;
        result = 0;
        while (original != 0) {
            original /= 10;
            n++;
        }
        original = num;
        while (original != 0) {
            remainder = original % 10;
            result += pow(remainder, n);
            original /= 10;
        }
        if (result == num) printf("%d\n", num);
    }
    return 0;
}