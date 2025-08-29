//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("enter 2 numbers: \n");
    scanf("%d %d", &a, &b);

    // Swap using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Output result
    printf("After swap: %d %d\n", a, b);

    return 0;
}
