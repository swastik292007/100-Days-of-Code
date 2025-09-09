/*Write a program to find the product of odd digits of a num.*/
#include <stdio.h>

int main() {
    int n, digit, product = 1, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;       // extract last digit
        if (digit % 2 == 1) { // check odd
            product *= digit;
            hasOdd = 1;       // mark that we found odd
        }
        n /= 10; // remove last digit
    }

    if (!hasOdd) {
        product = 1; // if no odd digit found, output 1
    }

    printf("Product of odd digits = %d\n", product);
    return 0;
}
