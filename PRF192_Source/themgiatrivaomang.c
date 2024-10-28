#include <stdio.h>

void themgiatri(int a[], int n, int k, int t){
	int i;
	k--;
	for (i=n; i>=k; i--){
		a[i]=a[i-1];
	}
	a[k]=t;
}
int main(){
	int n, i, k,t;
	printf("nhap so phan tu: ");
	scanf("%d", &n);
	int a[n];
	printf("nhap mang: ");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("nhap vi tri muon them: ");
	scanf("%d", &k);
	printf("so muon them vao: ");
	scanf("%d", &t);
	themgiatri(a,n,k,t);
	printf("mang sau khi thay doi la: ");
	for (i=0; i<=n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
