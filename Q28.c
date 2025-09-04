/*Write a program to print the product of even numbers from 1 to n.*/
#include <stdio.h>

int main() {
    int n;
    long long product = 1;  // use long long for large results
    int found = 0;          // flag to check if any even number exists

    // Ask user for input
    printf("Enter n: ");
    scanf("%d", &n);

    // Multiply even numbers from 1 to n
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        found = 1; // at least one even number found
    }

    if (found)
        printf("%lld\n", product);
    else
        printf("No even numbers in range\n");

    return 0;
}
