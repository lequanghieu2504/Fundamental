#include <stdio.h>
#define MAX 100

int timmin(int a[], int n){
	int min =a[0]+a[1];
	int i=0;
	for (i=1; i<n-1; i++){
		if (min > a[i]+a[i+1]){
			min = a[i]+a[i+1];
		}
	}
	return min ;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int i=0;
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("%d", timmin(a,n));
}
