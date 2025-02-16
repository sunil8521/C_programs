#include <stdio.h>
#include <math.h>
int main() {
    int num, original, remainder, n, result;
    printf("Armstrong numbers between 1 to 1000:\n");
    for (num = 1; num <= 1000; num++) {
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