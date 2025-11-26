#include <stdio.h>
int main(){
    int n,k;
    printf("enter size of arr n: ");
    scanf("%d",&n);
    int a[n];
    printf("enter array: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("enter k: ");
    scanf("%d",&k);

    for(int i=0;i<=n-k;i++){
        int f=0;
        for(int j=i;j<i+k;j++)
            if(a[j]<0){ printf("%d ",a[j]); f=1; break; }
        if(!f) printf("0 ");
    }
}
