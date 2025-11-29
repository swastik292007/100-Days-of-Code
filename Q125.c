#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Take filename
    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar();  // to clear newline left by scanf

    // Open file in append mode
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    // Take text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append to file
    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
