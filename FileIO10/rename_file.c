#include <stdio.h>
int main() {
    if (rename("old_file.txt", "new_file.txt") == 0)
        printf("File renamed successfully.\n");
    else
        perror("Error renaming file");
    return 0;
}