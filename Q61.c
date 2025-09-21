/*Search for an element in an array using linear search.*/
#include <stdio.h>

int main() {
    int n, key, i, found = -1;
    
    // Input array size
    printf("input size of array: ");
    scanf("%d", &n);
    int arr[n];
    
    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input element to search
    printf("input element to search: ");
    scanf("%d", &key);
    
    // Linear Search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = i;  // store index
            break;      // stop once found
        }
    }
    
    // Output
    if(found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");
    
    return 0;
}
