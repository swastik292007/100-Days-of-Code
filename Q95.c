/*Check if one string is a rotation of another.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRotation(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2 || len1 == 0) {
        return 0;
    }

    char* temp = (char*)malloc(sizeof(char) * (2 * len1 + 1));
    if (temp == NULL) {
        return -1; 
    }
    
    strcpy(temp, str1);
    strcat(temp, str1);

    int result = (strstr(temp, str2) != NULL);
    
    free(temp);
    return result;
}

int main() {
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; 
    
    if (isRotation(str1, str2)) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    
    return 0;
}