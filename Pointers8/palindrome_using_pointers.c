#include <stdio.h>
#include <string.h>
int isPalindrome(char *str) {
    char *start = str, *end = str + strlen(str) - 1;
    while (start < end) {
        if (*start != *end) return 0;
        start++; end--;
    }
    return 1;
}
int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");
    return 0;
}