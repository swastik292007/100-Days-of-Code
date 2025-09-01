//Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    // Input units consumed
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 9;
    } else {
        bill = (100 * 5) + (100 * 9) + (units - 200) * 16;
    }

    // Output bill
    printf("Bill: %d rupees\n", bill);

    return 0;
}
