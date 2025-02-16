#include <stdio.h>
struct Distance {
    int feet;
    float inches;
};
struct Distance add(struct Distance d1, struct Distance d2) {
    struct Distance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;
    if (sum.inches >= 12) {
        sum.feet++;
        sum.inches -= 12;
    }
    return sum;
}
int main() {
    struct Distance d1 = {5, 9.5}, d2 = {3, 4.5};
    struct Distance sum = add(d1, d2);
    printf("Sum: %d' %.1f\"\n", sum.feet, sum.inches);
    return 0;
}