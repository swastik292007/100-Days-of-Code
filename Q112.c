#include <stdio.h>

int main() {
    int n;
    printf("enter size of arr n: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter arr: ");
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);

    int maxSum = arr[0], curr = arr[0];

    for(int i=1;i<n;i++) {
        curr = (curr + arr[i] > arr[i]) ? curr + arr[i] : arr[i];
        maxSum = (maxSum > curr) ? maxSum : curr;
    }

    printf("max sum = %d", maxSum);
    return 0;
}
