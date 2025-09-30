/*Multiply two matrices.*/
#include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    printf("enter order of matrix: ");
    scanf("%d %d", &m1, &n1);
    int a[m1][n1];
    
    // Read first matrix
    printf("enter first matrix: ");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter order of matrix: ");
    scanf("%d %d", &m2, &n2);
    int b[m2][n2];

    // Read second matrix
    printf("enter second matrix: ");
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Check compatibility
    if (n1 != m2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int c[m1][n2];

    // Initialize result matrix
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
