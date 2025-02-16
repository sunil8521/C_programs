#include <stdio.h>
#include <string.h>
int main() {
    FILE *file = fopen("data.txt", "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }
    char line[256], pattern[50] = "search";
    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, pattern))
            printf("%s", line);
    }
    fclose(file);
    return 0;
}