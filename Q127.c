#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    // Open input file
    in = fopen("sample.txt", "r");
    if (in == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    // Open output file
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(in);
        return 1;
    }

    // Read and convert lowercase to uppercase
    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("File converted successfully! Check output.txt\n");

    return 0;
}
