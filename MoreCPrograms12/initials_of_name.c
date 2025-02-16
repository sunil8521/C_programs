#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    printf("Enter your full name: ");
    gets(name);
    printf("Initials: %c", name[0]);
    for (int i = 1; i < strlen(name); i++) {
        if (name[i] == ' ') printf(". %c", name[i+1]);
    }
    printf("\n");
    return 0;
}