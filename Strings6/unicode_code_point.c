#include <stdio.h>
void printUnicode(char str[], int index) {
    if(index < 0 || str[index] == '\0') {
        printf("Invalid index\n");
        return;
    }
    printf("Unicode code point at index %d: %d\n", index, str[index]);
}
int main() {
    char str[100];
    int index;
    printf("Enter a string: ");
    gets(str);
    printf("Enter index: ");
    scanf("%d", &index);
    printUnicode(str, index);
    return 0;
}