#include <stdio.h>
int main(){
    int n,k;
    printf("enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("enter array: ");

    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("enter k: ");
    scanf("%d",&k);
    
    for(int i=0;i<=n-k;i++){
        int m=a[i];
        for(int j=i+1;j<i+k;j++)
            if(a[j]>m) m=a[j];
        
        printf("%d ",m);
    }
}
