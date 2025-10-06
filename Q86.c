#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;
    
    printf("enter word: ");
    scanf("%s", str);   // Input (single word as per sample test case)

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;   // Not palindrome
            break;
        }
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
