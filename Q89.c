/*Count frequency of a given character in a string.*/
#include <stdio.h>

int main() {
    printf("enter string: ");
    char str[100], ch;
    int i, count = 0;

    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }

    printf("%d", count);
    return 0;
}
