/* Write a program to print the pattern*/
#include <stdio.h>

int main() {
    int i, j;
    int n = 5;  // size of the pattern

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
