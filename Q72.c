/*find sum of all elements of a matrix.*/
#include <stdio.h>

int main() {
    int rows, cols;
    printf("enter no of rows and columns: ");
    scanf("%d %d", &rows, &cols);   
    
    int matrix[100][100];  // assume max 100x100 matrix
    int sum = 0;
    
    // input matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];   // add to sum while reading
        }
    }
    
    // print sum
    printf("sum = %d\n", sum);
    
    return 0;
}
