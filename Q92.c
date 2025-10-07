/*Find the first repeating lowercase alphabet in a string.*/
#include <stdio.h>
#include <string.h>

char firstRepeatingChar(const char* str) {
    int freq[26] = {0}; 
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            if (freq[index] == 1) { 
                return str[i];
            }
            freq[index]++;
        }
    }
    return '\0'; 
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    char result = firstRepeatingChar(str);
    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("No repeating character found.\n");
    }
    return 0;
}