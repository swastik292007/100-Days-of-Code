/*Add two matrices.*/
#include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    
    printf("Read first matrix dimensions: ");
    scanf("%d %d", &m1, &n1);
    int a[m1][n1];
    
    printf("Input first matrix: ");
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Read second matrix dimensions: ");
    scanf("%d %d", &m2, &n2);
    int b[m2][n2];
    
    printf("Input second matrix: ");
    for(int i = 0; i < m2; i++) {
        for(int j = 0; j < n2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Check if addition is possible
    if(m1 != m2 || n1 != n2) {
        printf("Matrix addition not possible");
        return 0;
    }
    
    // Add matrices
    int sum[m1][n1];
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // Print result
    for(int i = 0; i < m1; i++) {
        for(int j = 0; j < n1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
