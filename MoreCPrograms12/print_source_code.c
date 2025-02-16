#include <stdio.h>
int main() {
    FILE *fp = fopen(__FILE__, "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF) putchar(ch);
    fclose(fp);
    return 0;
}