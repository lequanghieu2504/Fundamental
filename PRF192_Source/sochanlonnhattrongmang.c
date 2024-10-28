#include<stdio.h>
#include<stdbool.h>

bool sochan(int n){
    return n%2==0;
}
void bubbleSort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                // Hoán d?i a[j] và a[j + 1]
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
// sochanlonnhat
int scln(int a[], int n){
    int i;
    int scln;
    int kq;
    bubbleSort(a,n);
    for (i=n-1; i>0; i--){
        if (sochan(a[i])){
            scln=a[i];
            break;
        }
    }
    return scln;
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
    printf("so chan lon nhat trong mang la: %d", scln(a, n));
    return 0;
}
