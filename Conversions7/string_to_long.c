#include <stdio.h>
#include <stdlib.h>
int main() {
    char str[20];
    printf("Enter a string representing a long integer: ");
    scanf("%s", str);
    long num = atol(str);
    printf("String to Long: %ld\n", num);
    return 0;
}