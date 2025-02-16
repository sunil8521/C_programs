#include <stdio.h>
struct Student {
    char name[50];
    int age, id;
};
void sort(struct Student s[], int n, char by) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((by == 'A' && s[i].age > s[j].age) || (by == 'I' && s[i].id > s[j].id)) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
int main() {
    struct Student s[] = {{"Alice", 20, 103}, {"Bob", 22, 101}, {"Charlie", 21, 102}};
    int n = sizeof(s) / sizeof(s[0]);
    char choice = 'A'; // Sort by 'A' (age) or 'I' (ID)
    sort(s, n, choice);
    for (int i = 0; i < n; i++)
        printf("%s %d %d\n", s[i].name, s[i].age, s[i].id);
    return 0;
}