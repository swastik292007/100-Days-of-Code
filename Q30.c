/*Write a program to reverse a given number.*/
#include <stdio.h>

int main() {
    int n, rev = 0;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        int digit = n % 10;        // get last digit
        rev = rev * 10 + digit;    // build reversed number
        n /= 10;                   // remove last digit
    }

    printf("%d\n", rev);

    return 0;
}
