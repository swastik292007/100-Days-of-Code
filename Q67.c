/*insert an element at a given position.*/
#include <stdio.h>

int main() {
    int n, pos, elem;
    printf("enter no. of elements: ");
    scanf("%d", &n);
    int arr[100];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("enter position and value: ");
    scanf("%d %d", &pos, &elem); // position (0-based) and element

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];   // shift right
    
    arr[pos] = elem;
    n++;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
