/*Check if two strings are anagrams of each other.*/

#include <stdio.h>
#include <string.h>

int areAnagrams(const char* str1, const char* str2) {
    int count1[256] = {0}; 
    int count2[256] = {0};

    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]]++;
    }
    
    for (int i = 0; str2[i] != '\0'; i++) {
        count2[(unsigned char)str2[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char str1[100];
    printf("Enter string one: ");
    scanf("%s", str1);
    char str2[100];
    printf("Enter a string two: ");
    scanf("%s", str2);
    
    if (areAnagrams(str1, str2)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }
    
    char str3[] = "hello";
    char str4[] = "world";
    
    if (areAnagrams(str3, str4)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}