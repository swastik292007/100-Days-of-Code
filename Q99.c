#include <stdio.h>

int main() {
    int day, month, year;
    char monthName[4];
    printf("enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    switch (month) {
        case 1:  sprintf(monthName, "Jan"); break;
        case 2:  sprintf(monthName, "Feb"); break;
        case 3:  sprintf(monthName, "Mar"); break;
        case 4:  sprintf(monthName, "Apr"); break;
        case 5:  sprintf(monthName, "May"); break;
        case 6:  sprintf(monthName, "Jun"); break;
        case 7:  sprintf(monthName, "Jul"); break;
        case 8:  sprintf(monthName, "Aug"); break;
        case 9:  sprintf(monthName, "Sep"); break;
        case 10: sprintf(monthName, "Oct"); break;
        case 11: sprintf(monthName, "Nov"); break;
        case 12: sprintf(monthName, "Dec"); break;
        default: sprintf(monthName, "Err"); break;
    }

    printf("%02d-%s-%d", day, monthName, year);

    return 0;
}
