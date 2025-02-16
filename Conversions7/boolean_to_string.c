#include <stdio.h>
void booleanToString(int value) {
    printf("Boolean as String: %s\n", value ? "true" : "false");
}
int main() {
    int boolean;
    printf("Enter 1 for true, 0 for false: ");
    scanf("%d", &boolean);
    booleanToString(boolean);
    return 0;
}