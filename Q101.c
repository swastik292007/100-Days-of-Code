//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;       
            high = mid - 1;     
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    printf("%d", index);

    return 0;
}
