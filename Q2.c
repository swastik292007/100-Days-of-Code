//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main()   {
    float num1,num2;
    float sum,diff,product;
    float quotient;
    printf("enter 2 numbers: \n");
    scanf("%f%f",&num1,&num2);
    sum=num1+num2;
    diff=num1-num2;
    product=num1*num2;
    
    printf("Sum = %f \n",sum);
    printf("diff = %f \n",diff);
    printf("product = %f \n",product);
     
    if(num2!=0) {
        quotient = (float)num1/num2;
        printf("quotient = %f \n",quotient);
    }
    else{
        printf("quotient=undefined(division by zero not allowed) \n");
    }
    return 0;
}