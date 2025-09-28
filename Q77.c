/*Check if the elements on the diagonal of a matrix are distinct.*/
#include <stdio.h>

int main() {
    int n, m;
    printf("enter order of matrix: ");
    scanf("%d %d", &n, &m);

    int a[n][m];
    printf("enter matrix: ");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int distinct = 1; // assume diagonal elements are distinct
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i][i] == a[j][j]) {
                distinct = 0; // found duplicate
                break;
            }
        }
        if(!distinct) break;
    }

    if(distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
