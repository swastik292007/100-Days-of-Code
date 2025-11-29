#include <stdio.h>

int main() {
    FILE *fp;
    long long num;
    long long sum = 0;
    long long count = 0;
    double avg;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error! Could not open numbers.txt\n");
        return 1;
    }

    // Read all integers until EOF; only increment when fscanf successfully reads an integer
    while (fscanf(fp, "%lld", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 0;
    }

    avg = (double)sum / (double)count;

    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
