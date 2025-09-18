/*Q58: Find the maximum and minimum element in an array.*/ 
#include <stdio.h>

int main() {
    int n, i;

    // Read size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with first element
    int max = arr[0], min = arr[0];

    // Traverse array to find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Print results
    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}
