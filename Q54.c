/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *                   */
#include <stdio.h>

int main() {
    int n;  
    printf("height of the upper half (excluding lower inverted part): ");
    scanf("%d",&n);
    int i, j;

    // Upper half (including middle row)
    for(i = 1; i <= n; i++) {
        // print spaces
        for(j = 1; j <= n-i; j++) {
            printf(" ");
        }
        // print stars
        for(j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(i = n-1; i >= 1; i--) {
        // print spaces
        for(j = 1; j <= n-i; j++) {
            printf(" ");
        }
        // print stars
        for(j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
