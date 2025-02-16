#include <stdio.h>
#include <time.h>
int main() {
    time_t t = time(NULL);
    struct tm *gmt = gmtime(&t);
    printf("Current GMT: %02d:%02d:%02d\n", gmt->tm_hour, gmt->tm_min, gmt->tm_sec);
    return 0;
}