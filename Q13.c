//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main() {
    int year;

    // Input year
    printf("enter year: \n");
    scanf("%d", &year);

    // Leap year check
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}
