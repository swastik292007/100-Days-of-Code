#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcName[50], destName[50];
    int ch;

    // Take filenames from user
    printf("Enter source filename: ");
    scanf("%s", srcName);

    printf("Enter destination filename: ");
    scanf("%s", destName);

    // Open source file
    src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Error! Source file not found.\n");
        return 1;
    }

    // Open destination file
    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error! Could not create destination file.\n");
        fclose(src);
        return 1;
    }

    // Copy character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close files
    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);

    return 0;
}
