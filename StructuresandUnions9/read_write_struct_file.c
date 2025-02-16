#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s = {"John", 101, 92.5};
    FILE *fptr = fopen("student.dat", "wb");
    fwrite(&s, sizeof(s), 1, fptr);
    fclose(fptr);
    
    struct Student s_read;
    fptr = fopen("student.dat", "rb");
    fread(&s_read, sizeof(s_read), 1, fptr);
    fclose(fptr);
    
    printf("Read from file: %s %d %.2f\n", s_read.name, s_read.roll, s_read.marks);
    return 0;
}