/*delete an element from an array.*/
#include <stdio.h>

int main() {
    int n, pos;
    printf("enter no. of elements: ");
    scanf("%d", &n);
    int arr[100];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("enter index of num to be deleted: ");
    scanf("%d", &pos); // position (0-based)

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];   // shift left
    
    n--;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
