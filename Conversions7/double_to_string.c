#include <stdio.h>
#include <stdlib.h>
int main() {
    double num;
    char str[30];
    printf("Enter a double number: ");
    scanf("%lf", &num);
    sprintf(str, "%lf", num);
    printf("Double as String: %s\n", str);
    return 0;
}