/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345   */
#include <stdio.h>

int main() {
    int n,i,j;
    printf("enter num of rows: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--) {
        for(j=i;j<=n;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
