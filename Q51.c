/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345   */
#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5;  // number of rows

    for (i = 1; i <= n; i++) {
        // print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // print numbers
        for (k = n - i + 1; k <= n; k++) {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
