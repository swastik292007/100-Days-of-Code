// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int main() {
    int n, target;
    
    printf("enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    
    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    printf("enter x{target}: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}
