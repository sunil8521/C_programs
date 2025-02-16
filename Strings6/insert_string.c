#include <stdio.h>
#include <string.h>
void insertString(char str[], char insert[], int pos) {
    char temp[200];
    strncpy(temp, str, pos);
    temp[pos] = '\0';
    strcat(temp, insert);
    strcat(temp, str + pos);
    printf("Modified String: %s\n", temp);
}
int main() {
    char str[100], insert[100];
    int pos;
    printf("Enter main string: ");
    gets(str);
    printf("Enter string to insert: ");
    gets(insert);
    printf("Enter position: ");
    scanf("%d", &pos);
    insertString(str, insert, pos);
    return 0;
}