/*second largest num in an array.*/
#include <stdio.h>

int main() {
    int n;
    printf("enter no of elements: ");
    scanf("%d", &n);
    int arr[100];
    
    for (int i = 0; i < n; i++) {
        printf("enter num: ");
        scanf("%d", &arr[i]);
    }
    int first = -1e9, second = -1e9;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    printf("second largest num = %d", second);

    return 0;
}
