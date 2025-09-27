/*Check if a matrix is symmetric.*/
#include <stdio.h>

int main() {
    int n, m;
    printf("Read dimensions: ");
    scanf("%d %d", &n, &m);   
    
    int a[n][m];
    
    printf("Input matrix: ");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Symmetric check is only valid for square matrices
    if(n != m) {
        printf("False");
        return 0;
    }
    
    int isSymmetric = 1;  // assume True
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) break;
    }
    
    if(isSymmetric)
        printf("True");
    else
        printf("False");
    
    return 0;
}
