/*Remove all vowels from a string.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeVowels(const char* str, char* newStr) {
    int i, j = 0;
    const char vowels[] = "aeiouAEIOU";
    
    for (i = 0; str[i] != '\0'; i++) {
        int isVowel = 0;
        for (int k = 0; k < strlen(vowels); k++) {
            if (str[i] == vowels[k]) {
                isVowel = 1;
                break;
            }
        }
        if (!isVowel) {
            newStr[j++] = str[i];
        }
    }
    newStr[j] = '\0'; 
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    char newStr[100]; 
    removeVowels(str, newStr);
    printf("%s\n", newStr);
    return 0;
}