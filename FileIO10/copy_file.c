#include <stdio.h>
int main() {
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("destination.txt", "w");
    if (!src || !dest) {
        perror("Error opening files");
        return 1;
    }
    char ch;
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);
    printf("File copied successfully.\n");
    fclose(src);
    fclose(dest);
    return 0;
}