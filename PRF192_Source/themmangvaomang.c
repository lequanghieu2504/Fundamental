#include <stdio.h>

void chenmang (int a[], int *n, int ai[], int k, int t){
    int i;
    for (i=*n-1; i>=k; i--){
        a[i+t]=a[i];
    }
    for (i=0; i<t; i++){
        a[i+k]=ai[i];
    }
    *n+=t;
}

int main(){
    int n,k,t,i;
    printf("nhap so phan tu: ");
    scanf("%d", &n);
    int a[n+100];
    printf ("nhap mang: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("nhap vi tri muon them: ");
    scanf("%d", &k);
    k-=1;
    printf("nhap so phan tu cua mang moi: ");
    scanf ("%d", &t);
    int ai[t];
    printf("nhap mang muon them: ");
    for (i=0; i<t; i++){
        scanf("%d", &ai[i]);
    }
    chenmang ( a, &n, ai, k, t);
    printf("mang sau khi thay doi la: ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
