#include <stdio.h>

// 5. Check Whether a Number is Prime or Not
int main() {
    int n, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) flag = 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}
