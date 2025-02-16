#include <stdio.h>
int main() {
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("destination.txt", "a");
    if (!src || !dest) {
        perror("Error opening files");
        return 1;
    }
    char ch;
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);
    printf("Content appended successfully.\n");
    fclose(src);
    fclose(dest);
    return 0;
}