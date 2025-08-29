//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, sum;

    // Input n
    printf("enter value of n: \n");
    scanf("%d", &n);

    // Formula for sum of first n natural numbers
    sum = (n * (n + 1)) / 2;

    // Output result
    printf("Sum=%d\n", sum);

    return 0;
}
