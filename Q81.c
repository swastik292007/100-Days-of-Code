/*Count characters in a string without using built-in length functions.*/
#include <stdio.h>

int main() {
    char str[1000];
    
    // Read input string 
    printf("enter string(including spaces until newline): ");
    scanf("%[^\n]", str);
    
    int count = 0, i = 0;
    while (str[i] != '\0') {
        count++;
        i++;
    }
    
    printf("count = %d\n", count);
    return 0;
}
