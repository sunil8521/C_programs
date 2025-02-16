#include <stdio.h>
void convertTime(int hours) {
    int minutes = hours * 60;
    int seconds = minutes * 60;
    printf("%d hours = %d minutes = %d seconds\n", hours, minutes, seconds);
}
int main() {
    int hours;
    printf("Enter hours: ");
    scanf("%d", &hours);
    convertTime(hours);
    return 0;
}