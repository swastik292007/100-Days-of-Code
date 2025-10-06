#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;
    
    printf("enter word: ");
    scanf("%s", str);   // Input (single word as per sample test case)

    len = strlen(str);

    // Swapping characters from start and end
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("%s\n", str);
    return 0;
}
