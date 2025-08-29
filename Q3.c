//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    // Input length and breadth
    printf("enter length and breadth: \n");
    scanf("%d %d", &length, &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Output result
    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}