#include<stdio.h>
#include<stdbool.h>

bool isprime(int n){
    if (n<2) return false;
    if (n==2) return true;
    if (n%2==0) return false;
    int i;
    for(i=3; i*i<=n;i+=2){
        if (n%i==0) return false;
    }
    return true;
}
void xoasnt(int a[], int *n) {
    int i,j = 0;
    for ( i = 0; i < *n; i++) {
        if (!isprime(a[i])) {
            a[j++] = a[i];
        }
    }
    *n = j; 
}

int main(){
    int i,n;
    printf("so gia tri trong mang: ");
    scanf("%d", &n);
    printf("nhap mang: ");
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    xoasnt(a,&n);
    printf("mang moi la: \n");
    for (i=0; i<n; i++){
        printf("%d ", a[i]);   
    }
    return 0;
}
