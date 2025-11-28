#include <stdio.h>

int main() {
    int n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Output: %d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("Output: -1 -1\n");
    return 0;
}
