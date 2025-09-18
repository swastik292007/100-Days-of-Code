/*Read and print elements of a one-dimensional array.*/
#include <stdio.h>

int main() {
    int n, i;

    // Read size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // declare array of size n

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements
    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
