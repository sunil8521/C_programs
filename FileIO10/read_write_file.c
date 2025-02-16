#include <stdio.h>
int main() {
    FILE *src = fopen("input.txt", "r");
    FILE *dest = fopen("output.txt", "w");
    if (!src || !dest) {
        perror("Error opening files");
        return 1;
    }
    char ch;
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);
    printf("Content copied successfully.\n");
    fclose(src);
    fclose(dest);
    return 0;
}