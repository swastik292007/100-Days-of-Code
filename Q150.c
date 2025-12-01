#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    // Allocate memory dynamically for one student
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Modify data using pointer and -> operator
    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Roll: ");
    scanf("%d", &s->roll);

    printf("Enter Marks: ");
    scanf("%d", &s->marks);

    // Display modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           s->name, s->roll, s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
