//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define PI 3.1416   // Define value of PI

int main() {
    float radius, area, circumference;

    // Input radius
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Output result with 2 decimal places
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}