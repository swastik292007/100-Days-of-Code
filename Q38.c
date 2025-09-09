/*sum of digits of a num.*/
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to extract digits and add them
    while (num > 0) {
        digit = num % 10;   // Get last digit
        sum += digit;       // Add to sum
        num /= 10;          // Remove last digit
    }

    // Output result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
