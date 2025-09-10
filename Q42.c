/*checking if it is a perfect num or not.*/
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // find proper divisors and add them
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a Perfect Number\n", num);
    } else {
        printf("%d is not a Perfect Number\n", num);
    }

    return 0;
}