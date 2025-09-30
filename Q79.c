/*Perform diagonal traversal of a matrix.*/


#include <stdio.h>

int main() {
    int m, n;
    printf("enter order of matrix: ");
    scanf("%d %d", &m, &n);
    int a[m][n];

    // Read matrix
    printf("enter matrix: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal traversal
    for (int d = 0; d < m + n - 1; d++) {
        int row = (d < n) ? 0 : d - n + 1;
        int col = (d < n) ? d : n - 1;

        while (row < m && col >= 0) {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}
