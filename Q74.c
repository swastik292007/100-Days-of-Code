/*Find the transpose of a matrix.*/
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);   // Read number of rows and columns
    
    int a[m][n], t[n][m];
    
    // Input matrix
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Find transpose
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            t[j][i] = a[i][j];
        }
    }
    
    // Print transpose
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

