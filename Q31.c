#include <stdio.h>

int main() {
    int num;
    int binary[32]; // store binary digits
    int i = 0;

    // input
    printf("enter num=");
    scanf("%d", &num);

    // edge case: when number is 0
    if (num == 0) {
        printf("0\n");
        return 0;
    }

    // conversion to binary
    while (num > 0) {
        binary[i] = num % 2;  // remainder (0 or 1)
        num = num / 2;
        i++;
    }

    // print in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
