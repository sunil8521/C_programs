#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    if (!f1 || !f2) {
        perror("Error opening files");
        return 1;
    }
    char c1, c2;
    int pos = 1;
    while ((c1 = fgetc(f1)) != EOF && (c2 = fgetc(f2)) != EOF) {
        if (c1 != c2) {
            printf("Mismatch at position %d: '%c' vs '%c'\n", pos, c1, c2);
        }
        pos++;
    }
    fclose(f1);
    fclose(f2);
    return 0;
}