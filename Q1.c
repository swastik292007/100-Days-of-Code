// Write a program to input two numbers and display their sum.
#include <stdio.h>

int main()   {
    int num1,num2,sum;
    printf("Enter 2 numbers: \n");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("Sum = %d",sum);
    return 0;

}