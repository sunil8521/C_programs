#include <stdio.h>
int main() {
    FILE *tmp = tmpfile();
    if (!tmp) {
        perror("Failed to create temp file");
        return 1;
    }
    fprintf(tmp, "Temporary file content\n");
    printf("Temporary file created successfully.\n");
    fclose(tmp);
    return 0;
}