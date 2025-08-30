// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

 #include <stdio.h>

int main() {
    int a, b, c;

    // Input side lengths
    printf("Enter the three sides of the triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Check if valid triangle first
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            printf("Equilateral\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } 
        else {
            printf("Scalene\n");
        }
    } 
    else {
        printf("Not a valid triangle\n");
    }

    return 0;
}