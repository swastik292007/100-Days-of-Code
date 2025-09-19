/*Count even and odd numbers in an array.*/ 

#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;
    
    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Count even and odd numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    
    // Output result
    printf("Even=%d, Odd=%d\n", even, odd);
    
    return 0;
}