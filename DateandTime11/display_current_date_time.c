#include <stdio.h>
#include <time.h>
int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    printf("Current Date and Time: %s", asctime(tm));
    return 0;
}