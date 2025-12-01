#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter Name for Student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter Roll for Student %d: ", i + 1);
        scanf("%d", &s[i].roll);

        printf("Enter Marks for Student %d: ", i + 1);
        scanf("%d", &s[i].marks);

        printf("\n");
    }

    // Find topper
    int topperIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Print topper details
    printf("Topper: %s (Marks: %d)\n", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}
