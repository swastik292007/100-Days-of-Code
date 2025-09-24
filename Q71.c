/*read and print a matrix.*/
#include <stdio.h>

int main() {
    int rows, cols;
    printf("read rows and columns: ");
    scanf("%d %d", &rows, &cols);   
    
    int matrix[100][100];  // assume max 100x100 matrix
    
    // input matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // output matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
