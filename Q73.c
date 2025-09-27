/*Find the sum of each row of a matrix and store it in an array.*/
#include <stdio.h>

int main() {
    int m, n;
    printf("Read number of rows and columns: ");
    scanf("%d %d", &m, &n);   
    int a[m][n], rowSum[m];
    
    printf("Input matrix: ");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Calculate sum of each row
    for(int i = 0; i < m; i++) {
        rowSum[i] = 0;
        for(int j = 0; j < n; j++) {
            rowSum[i] += a[i][j];
        }
    }
    
    // Print row sums
    for(int i = 0; i < m; i++) {
        printf("sum = %d ", rowSum[i]);
    }
    
    return 0;
}
