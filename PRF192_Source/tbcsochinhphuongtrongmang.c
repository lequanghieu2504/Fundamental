#include <stdio.h>
#define MAX 100
#include <stdbool.h>
#include <math.h>
bool sochinhphuong(int n){
	int a =sqrt(n);
	if (a*a==n) return true;
	else if(a*a!=n) return false;
	return true;
}
float tinhtbcchinhphuong(int a[], int n){
	int tong=0;
	int dem =0;
	int i;
	for (i=0; i<n; i++){
		if (sochinhphuong(a[i])){
			tong +=a[i];
			dem++;
		}
	}
	if(dem==0) return 0;
	return (float)tong/dem;
}
int main(){
	int a[MAX];
	int n;
	scanf("%d", &n);
	int i;
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("%f", tinhtbcchinhphuong(a,n));
	return 0;
}
