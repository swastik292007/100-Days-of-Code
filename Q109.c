#include <stdio.h>
int main(){
    int n,k;
    printf("enter size of arr n: ");
    scanf("%d",&n);
    int a[n];
    printf("enter array : ");
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("enter k : ");
    scanf("%d",&k);

    int s=0;
    for(int i=0;i<k;i++) s+=a[i];
    int mx=s;

    for(int i=k;i<n;i++){
        s+=a[i]-a[i-k];
        if(s>mx) mx=s;
    }

    printf("%d",mx);
}
