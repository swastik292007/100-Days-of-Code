#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], seen[n];

    for (int i = 0; i < n; i++)
        seen[i] = 0;

    printf("Enter %d elements: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (seen[arr[i]] == 1) {
            printf("Output: %d\n", arr[i]);
            return 0;
        }
        seen[arr[i]] = 1;
    }

    return 0;
}
