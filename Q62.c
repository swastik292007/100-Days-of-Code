/*Reverse an array without taking extra space.*/
#include <stdio.h>

int main() {
    int n, i;
    
    // Input array size
    printf("input size of array: ");
    scanf("%d", &n);
    int arr[n];
    
    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Reverse the array in-place
    int start = 0, end = n - 1, temp;
    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    // Print reversed array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
