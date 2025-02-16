#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s1 = {"John", 101, 92.5};
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s1.name, s1.roll, s1.marks);
    return 0;
}