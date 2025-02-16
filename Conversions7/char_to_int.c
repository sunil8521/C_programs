#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Character as Integer: %d\n", (int)ch);
    return 0;
}