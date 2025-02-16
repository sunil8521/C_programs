#include <stdio.h>
#include <string.h>
void removeLeadingZeros(char str[]) {
    int i = 0;
    while(str[i] == '0') i++;
    if(str[i] == '\0') i--;
    printf("Result: %s\n", str + i);
}
int main() {
    char str[100];
    printf("Enter a number: ");
    gets(str);
    removeLeadingZeros(str);
    return 0;
}