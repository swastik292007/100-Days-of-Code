#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // input
    scanf("%d", &num);

    original = num;

    // reverse the number
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // check palindrome
    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
