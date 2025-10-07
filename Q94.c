/*Find the longest word in a sentence.*/
#include <stdio.h>
#include <string.h>

void findLongestWord(const char* sentence, char* longestWord) {
    int maxLen = 0;
    int currentLen = 0;
    int start = 0;
    int maxStart = 0;
    int i;
    
    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStart = start;
            }
            currentLen = 0;
            start = i + 1;
        } else {
            currentLen++;
        }
    }
    
    if (currentLen > maxLen) {
        maxLen = currentLen;
        maxStart = start;
    }
    
    strncpy(longestWord, sentence + maxStart, maxLen);
    longestWord[maxLen] = '\0';
}

int main() {
    char sentence[100];
    printf("Enter sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    sentence[strcspn(sentence, "\n")] = 0; 
    
    char longestWord[50];
    
    findLongestWord(sentence, longestWord);
    printf("%s\n", longestWord);
    
    return 0;
}