#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    int marks[];
};
int main() {
    int n = 3;
    struct Student *s = malloc(sizeof(struct Student) + n * sizeof(int));
    s->roll = 101;
    for (int i = 0; i < n; i++) s->marks[i] = 90 + i;
    printf("Roll: %d\nMarks: ", s->roll);
    for (int i = 0; i < n; i++) printf("%d ", s->marks[i]);
    printf("\n");
    free(s);
    return 0;
}