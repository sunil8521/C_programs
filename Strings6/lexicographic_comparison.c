#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    int cmp = strcmp(str1, str2);
    if(cmp == 0)
        printf("Both strings are equal\n");
    else if(cmp < 0)
        printf("First string comes before second string lexicographically\n");
    else
        printf("First string comes after second string lexicographically\n");
    return 0;
}