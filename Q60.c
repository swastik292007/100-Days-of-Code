/*Count positive, negative, and zero elements in an array.*/

#include <stdio.h>

int main() {
    int n, i, positive = 0, negative = 0, zero = 0;
    
    // Input size of array
    printf("size of array: ");
    scanf("%d", &n);
    int arr[n];
    
    // Input elements
    printf("enter values: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
    }
    
    // Count positive, negative, and zero
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }
    
    // Output result
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    
    return 0;
}