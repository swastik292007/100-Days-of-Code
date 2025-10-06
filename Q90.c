/*Toggle case of each character in a string.*/
#include <stdio.h>

int main() {
    printf("enter string: ");
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  // to uppercase
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  // to lowercase
    }

    printf("%s", str);
    return 0;
}
