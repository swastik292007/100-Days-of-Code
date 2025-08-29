//Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("enter 2 numbers: \n");
    scanf("%d %d", &a, &b);

    // Swap without third variable (using arithmetic)
    a = a + b;
    b = a - b;
    a = a - b;

    // Output result
    printf("After swap: %d %d\n", a, b);

    return 0;
}
