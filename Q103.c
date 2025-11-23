#include <stdio.h>

int main() {
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter values of array: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int total = 0;
    for(int i = 0; i < n; i++) total += arr[i];

    int leftSum = 0;
    for(int i = 0; i < n; i++) {
        int rightSum = total - leftSum - arr[i];
        if(leftSum == rightSum) {
            printf("%d", i);
            return 0;
        }
        leftSum += arr[i];
    }

    printf("-1");
    return 0;
}
