//Write a program to assign grades based on a percentage input.
#include <stdio.h>

int main() {
    int percentage;

    // Input percentage
    printf("enter percentage of student: \n");
    scanf("%d", &percentage);

    // Assign grades
    if (percentage >= 90) {
        printf("Grade A\n");
    } 
    else if (percentage >= 80) {
        printf("Grade B\n");
    } 
    else if (percentage >= 70) {
        printf("Grade C\n");
    } 
    else if (percentage >= 60) {
        printf("Grade D\n");
    } 
    else {
        printf("Grade F\n");
    }

    return 0;
}
