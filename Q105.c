#include <stdio.h>

int main() {
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter values of array: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int candidate = 0, count = 0;
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = arr[i];
            count = 1;
        } else if(arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] == candidate) count++;

    if(count > n/2) printf("%d", candidate);
    else printf("-1");

    return 0;
}
