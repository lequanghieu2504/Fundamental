#include<stdio.h>
#include<stdbool.h>

int timuoc(int n){
    int i;
    int dem=0;
    for(i=1; i<=n; i++){
        if (n%i==0) dem++;
    }
    return dem;
}
// tim uoc nhieu nhat trong mang
int tunntm(int a[], int n){
    int i;
    int uoc=timuoc(a[0]);
    int kq;
    for (i=1; i<n; i++){
        if (timuoc(a[i])>uoc) {
        uoc=timuoc(a[i]);
        kq=a[i];
        }
    }
    return kq;
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
    printf("so co nhieu uoc nhat trong mang la: %d", tunntm(a, n));
    return 0;
}
