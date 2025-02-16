#include <stdio.h>
int main() {
    int num, reversed = 0, original, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (original == reversed) printf("Palindrome Number\n");
    else printf("Not a Palindrome Number\n");
    return 0;
}