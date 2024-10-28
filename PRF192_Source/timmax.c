#include <stdio.h>
#define MAX 100

int timmax(int a[], int n){
	int max =a[0];
	int i=0;
	int maxp=0;
	for (i=0; i<n; i++){
		if (max < a[i]){
			max = a[i];
			maxp =i+1;
		}
	}
	return maxp ;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int i=0;
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("%d", timmax(a,n));
}
