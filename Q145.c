#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to find and return the top student
struct Student getTopStudent(struct Student s[], int n) {
    int topIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];   // Returning structure
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input details
    for (int i = 0; i < n; i++) {
        printf("Enter Name for Student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter Roll for Student %d: ", i + 1);
        scanf("%d", &s[i].roll);

        printf("Enter Marks for Student %d: ", i + 1);
        scanf("%d", &s[i].marks);

        printf("\n");
    }

    // Call function
    struct Student top = getTopStudent(s, n);

    // Print topper
    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll, top.marks);

    return 0;
}
