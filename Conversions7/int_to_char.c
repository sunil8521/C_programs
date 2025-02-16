#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer (0-255): ");
    scanf("%d", &num);
    printf("Integer as Character: %c\n", (char)num);
    return 0;
}