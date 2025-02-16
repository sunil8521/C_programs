#include <stdio.h>
#include <string.h>
void maximizeTime(char time[]) {
    if (time[0] == '_') time[0] = (time[1] <= '3' || time[1] == '_') ? '2' : '1';
    if (time[1] == '_') time[1] = (time[0] == '2') ? '3' : '9';
    if (time[3] == '_') time[3] = '5';
    if (time[4] == '_') time[4] = '9';
    printf("Maximized Time: %s\n", time);
}
int main() {
    char time[6];
    printf("Enter time in HH:MM format (use _ for missing digits): ");
    scanf("%s", time);
    maximizeTime(time);
    return 0;
}