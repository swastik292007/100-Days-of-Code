#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int cap = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (cap && str[i] != ' ') {
            str[i] = toupper(str[i]);
            cap = 0;
        }
        else if (str[i] == ' ') {
            cap = 1;
        }
    }

    printf("Output: %s", str);

    return 0;
}
