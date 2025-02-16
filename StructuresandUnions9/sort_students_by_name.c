#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
};
void sort(struct Student s[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(s[i].name, s[j].name) > 0) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
int main() {
    struct Student s[] = {{"Alice", 102}, {"Bob", 101}, {"Charlie", 103}};
    int n = sizeof(s) / sizeof(s[0]);
    sort(s, n);
    for (int i = 0; i < n; i++)
        printf("%s %d\n", s[i].name, s[i].roll);
    return 0;
}