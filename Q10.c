//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input total seconds
    printf("enter time in seconds: \n");

    scanf("%d", &totalSeconds);

    // Convert to hours, minutes, and seconds
    hours = totalSeconds / 3600;           // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;  // Remaining minutes
    seconds = totalSeconds % 60;           // Remaining seconds

    // Output in h:m:s format
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
