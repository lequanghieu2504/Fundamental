#include <stdio.h>

void xoamang(int a[], int n, int k){
	int i;
	k--;
	for (i=k; i<n-1; i++){
		a[i]=a[i+1];
	}
}
int main(){
	int n, i, k;
	printf("nhap so phan tu: ");
	scanf("%d", &n);
	int a[n];
	printf("nhap mang: ");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("nhap vi tri muon xoa: ");
	scanf("%d", &k);
	xoamang(a,n,k);
	printf("mang sau khi thay doi la: ");
	for (i=0; i<n-1; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
