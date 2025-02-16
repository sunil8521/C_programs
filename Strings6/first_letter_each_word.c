#include <stdio.h>
#include <ctype.h>
void printFirstLetters(char str[]) {
    int flag = 1;
    for(int i = 0; str[i]; i++) {
        if(flag && isalpha(str[i])) {
            printf("%c ", str[i]);
            flag = 0;
        }
        if(str[i] == ' ') flag = 1;
    }
}
int main() {
    char str[200];
    printf("Enter a string: ");
    gets(str);
    printFirstLetters(str);
    return 0;
}