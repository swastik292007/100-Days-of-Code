/*Write a program to print the sum of the first n odd numbers.*/
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask user for input
    printf("Enter n: ");
    scanf("%d", &n);

    // Loop to add first n odd numbers
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // i-th odd number = 2*i - 1
    }

    // Print result
    printf("%d\n", sum);

    return 0;
}
