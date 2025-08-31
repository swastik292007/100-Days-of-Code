//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main()  {
    int month;
    
    //enter month number
    printf("ENTER NUMBER (1-12):\n");
    scanf("%d",&month);

    switch (month) {
    case 1:
        printf("JANUARY,31days.\n");
        break;
    case 2:
        printf("FEBRUARY,28days.\n");
        break;
    case 3:
        printf("MARCH,31days.\n");
        break;
    case 4:
        printf("APRIL,30days.\n");
        break;
    case 5:
        printf("MAY,31days.\n");
        break;
    case 6:
        printf("JUNE,30days.\n");
        break;
    case 7:
        printf("JULY,31days.\n");
        break;
    case 8:
        printf("AUGUST,31days.\n");
        break;
    case 9:
        printf("SEPTEMBER,30days.\n");
        break;
    case 10:
        printf("OCTOBER,31days.\n");
        break;
    case 11:
        printf("NOVEMBER,30days.\n");
        break;
    case 12:
        printf("DECEMBER,31days.\n");
        break;

        default:
            printf("invalid number! , please input number between 1-12.\n");
            
    }
    return 0;
}