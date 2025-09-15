/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*    */
#include <stdio.h>

int main() {
    // Printing the irregular star pattern
    printf("*\n\n");     // first star + blank line
    printf("*\n*\n*\n\n"); // 3 stars with newlines + blank line
    printf("*\n*\n*\n*\n*\n\n"); // 5 stars + blank line
    printf("*\n*\n*\n\n"); // 3 stars + blank line
    printf("*\n");       // last single star
    return 0;
}
