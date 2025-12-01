#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];

    // Input details of 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter Name for Student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter Roll for Student %d: ", i + 1);
        scanf("%d", &s[i].roll);

        printf("Enter Marks for Student %d: ", i + 1);
        scanf("%d", &s[i].marks);

        printf("\n");
    }

    // Print all students in tabular form
    printf("Name\tRoll\tMarks\n");
    printf("---------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
