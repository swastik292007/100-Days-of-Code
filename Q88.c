/*Replace spaces with hyphens in a string.*/
#include <stdio.h>

int main() {
    printf("enter string: ");
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            str[i] = '-';
    }

    printf("%s", str);
    return 0;
}
