#include <stdio.h>
#include <math.h>
int main() {
    int num, original, remainder, n = 0, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
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
    if (result == num) printf("Armstrong Number\n");
    else printf("Not an Armstrong Number\n");
    return 0;
}