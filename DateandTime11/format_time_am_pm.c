#include <stdio.h>
void convertToAMPM(int hh, int mm) {
    char period[] = "AM";
    if (hh >= 12) {
        period[0] = 'P';
        if (hh > 12) hh -= 12;
    }
    if (hh == 0) hh = 12;
    printf("Formatted Time: %02d:%02d %s\n", hh, mm, period);
}
int main() {
    int hh, mm;
    printf("Enter time (HH MM in 24-hour format): ");
    scanf("%d %d", &hh, &mm);
    convertToAMPM(hh, mm);
    return 0;
}