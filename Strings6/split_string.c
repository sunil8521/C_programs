#include <stdio.h>
#include <string.h>
int main() {
    char str[200], delim[10];
    printf("Enter a string: ");
    gets(str);
    printf("Enter delimiter: ");
    gets(delim);
    char *token = strtok(str, delim);
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
    return 0;
}