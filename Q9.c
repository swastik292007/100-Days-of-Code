//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    // Input principal, rate, and time
    printf("enter principal amount , rate of interest, time: \n");
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    compoundInterest = principal * (pow((1 + rate / 100), time)) - principal;

    // Output results
    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);

    return 0;
}
