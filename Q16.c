//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("enter 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    // Check largest using if–else
    if (a >= b && a >= c) {
        printf("Largest is %d\n", a);
    } 
    else if (b >= a && b >= c) {
        printf("Largest is %d\n", b);
    } 
    else {
        printf("Largest is %d\n", c);
    }

    return 0;
}
