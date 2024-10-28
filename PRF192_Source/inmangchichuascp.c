#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkscp(int n){
    int a=sqrt(n);
    return a*a==n;
}

void taomangscp (int a[], int n){
    int i;
    for (i=1; i<=n; i++){
        a[i]=i*i;
        printf("%d ", a[i]);
    }
}
    
    int main(){
    int n,i;
    printf("nhap so phan tu: ");
    scanf("%d", &n);
    int a[n];
    taomangscp(a,n);
    return 0;
}
