#include <stdio.h>

int main() {
    int n, k;
    printf("enter size of arr n: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter arr : ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("enter k: ");
    scanf("%d",&k);

    for(int i=0;i<n-1;i++)   //bubble sort
        for(int j=0;j<n-i-1;j++)
            if(arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }

    printf("%d", arr[k-1]);
    return 0;
}
