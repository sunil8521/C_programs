#include <stdio.h>
#include <sys/stat.h>
int main() {
    if (chmod("example.txt", 0444) == 0)
        printf("File is now read-only.\n");
    else
        perror("Failed to change file permissions");
    return 0;
}