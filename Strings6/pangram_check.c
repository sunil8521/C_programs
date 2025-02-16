#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPangram(char str[]) {
    int mark[26] = {0};
    for(int i = 0; str[i]; i++)
        if(isalpha(str[i]))
            mark[tolower(str[i]) - 'a'] = 1;
    for(int i = 0; i < 26; i++)
        if(mark[i] == 0) return 0;
    return 1;
}
int main() {
    char str[200];
    printf("Enter a string: ");
    gets(str);
    if(isPangram(str))
        printf("Pangram\n");
    else
        printf("Not a Pangram\n");
    return 0;
}