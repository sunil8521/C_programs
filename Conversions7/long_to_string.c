#include <stdio.h>
#include <stdlib.h>
int main() {
    long num;
    char str[20];
    printf("Enter a long integer: ");
    scanf("%ld", &num);
    sprintf(str, "%ld", num);
    printf("Long as String: %s\n", str);
    return 0;
}