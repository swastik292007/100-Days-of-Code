/*Insert an element in a sorted array at the appropriate position.*/

#include <stdio.h>

int main() {
    int n, key;
    printf("size of array: ");
    scanf("%d", &n);   
    
    int arr[100];      // assuming max size 100
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);  // input array (already sorted)
    
    printf("element to insert: ");
    scanf("%d", &key); 
    
    int i = n - 1;
    
    // Shift elements to the right until correct position is found
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    
    arr[i + 1] = key; // insert key at right position
    n++;              // increase size
    
    // Print updated array
    for (int j = 0; j < n; j++)
        printf("%d ", arr[j]);
    
    return 0;
}
