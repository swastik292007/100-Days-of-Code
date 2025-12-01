#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function that accepts a structure and prints its members
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    // Call function
    printStudent(s);

    return 0;
}
