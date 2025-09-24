/*rotate an array to right by k position.*/
#include <stdio.h>

int main() {
    int n, k;
    printf("enter no. of elements: ");
    scanf("%d", &n);
    int arr[100];
    
    for (int i = 0; i < n; i++){
        printf("enter num: ");
        scanf("%d", &arr[i]);
 }
        
    printf("enter element to rotate: ");
    scanf("%d", &k);
    k = k % n;  // handle large k

    int temp[100];
    for (int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];  // shift
    
    for (int i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}
