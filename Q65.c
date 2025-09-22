/*Search in a sorted array using binary search.*/

#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (arr[mid] == key) {
            return mid;  // key found at index mid
        }
        else if (arr[mid] < key) {
            low = mid + 1;  // search in right half
        }
        else {
            high = mid - 1; // search in left half
        }
    }
    return -1; // key not found
}

int main() {
    int n, key;
    scanf("%d", &n);      // size of array
    
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);  // array elements
    
    scanf("%d", &key);    // element to search
    
    int result = binarySearch(arr, n, key);
    
    if (result != -1)
        printf("Found at index %d\n", result);
    else
        printf("-1\n");
    
    return 0;
}
