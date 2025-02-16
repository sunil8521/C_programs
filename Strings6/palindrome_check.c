#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    printf("Enter a string: ");
    gets(str);
    strcpy(rev, str);
    strrev(rev);
    if(strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");
    return 0;
}