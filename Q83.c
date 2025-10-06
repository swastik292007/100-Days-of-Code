/*Count vowels and consonants in a string.*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    
    printf("enter a string: ");
    scanf("%[^\n]s", str);  // Input with spaces too

    while (str[i] != '\0') {
        char ch = tolower(str[i]);  // convert to lowercase

        if (isalpha(ch)) { // check only alphabets
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
