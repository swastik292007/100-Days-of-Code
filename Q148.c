#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to check if two students are identical
int areIdentical(struct Student s1, struct Student s2) {
    return (strcmp(s1.name, s2.name) == 0) &&
           (s1.roll == s2.roll) &&
           (s1.marks == s2.marks);
}

int main() {
    struct Student s1, s2;

    // Input first student
    printf("Enter Name, Roll, Marks for Student 1: ");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    // Input second student
    printf("Enter Name, Roll, Marks for Student 2: ");
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    // Compare
    if (areIdentical(s1, s2))
        printf("Same\n");
    else
        printf("Different\n");

    return 0;
}
