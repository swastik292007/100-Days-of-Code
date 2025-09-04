/*Write a program to print numbers from 1 to n.*/
#include <stdio.h>

int main() {
    int n;

    // Ask the user
    printf("Enter n: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" "); // print space between numbers
        }
    }
    printf("\n");

    return 0;
}
