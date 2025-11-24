#include <stdio.h>

int main() {
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);

    int nums[n], prefix[n], suffix[n], ans[n];
    
    printf("enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    prefix[0] = 1;
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] * nums[i - 1];

    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
        suffix[i] = suffix[i + 1] * nums[i + 1];

    for (int i = 0; i < n; i++)
        ans[i] = prefix[i] * suffix[i];

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", ans[i]);
        if (i != n - 1) printf(",");
    }
    printf("]");

    return 0;
}
