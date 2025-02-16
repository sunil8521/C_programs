#include <stdio.h>
#include <string.h>
void reverseRec(char str[], int start, int end) {
    if(start >= end) return;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseRec(str, start + 1, end - 1);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    reverseRec(str, 0, strlen(str) - 1);
    printf("Reversed String: %s\n", str);
    return 0;
}