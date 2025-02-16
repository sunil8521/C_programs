#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0};
    printf("Enter a string: ");
    gets(str);
    for(int i = 0; str[i]; i++)
        freq[(int)str[i]]++;
    for(int i = 0; str[i]; i++)
        if(freq[(int)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    printf("No unique character found\n");
    return 0;
}