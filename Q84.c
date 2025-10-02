#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    scanf("%[^\n]s", str);  // Input with spaces too

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';  // manual conversion
        }
        i++;
    }

    printf("%s\n", str);
    return 0;
}
