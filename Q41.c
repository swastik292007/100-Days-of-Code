/*replacing 1st and last digit*/
#include <stdio.h>
#include <string.h>

int main() {
    char num[20], temp;

    printf("Enter a number: ");
    scanf("%s", num);   // number ko string me le liya

    int len = strlen(num);

    // swap first aur last character
    temp = num[0];
    num[0] = num[len - 1];
    num[len - 1] = temp;

    printf("Swapped number: %s\n", num);

    return 0;
}