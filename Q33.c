/*Write a program to check if a number is an Armstrong number.*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    // Calculate sum of nth power of its digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    // Check Armstrong condition
    if ((int)result == originalNum)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
