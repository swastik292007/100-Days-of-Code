/*Print initials of a name with the surname displayed in full.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100], last[50];
    int i, len, j = 0, last_start = 0;

    printf("Enter a name: ");
    gets(name);

    len = strlen(name);

    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            last_start = i + 1;
            break;
        }
    }

    strcpy(last, &name[last_start]);

    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    for (i = 0; i < last_start - 1; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0')
            printf("%c.", toupper(name[i+1]));
    }

    printf(" %s", last);

    return 0;
}
