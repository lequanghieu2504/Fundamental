#include <stdio.h>
#define MAX 100
#include <stdbool.h>

bool sapxep(int a[], int n){
	int i;
	for (i=0; i<n-1; i++){
		if (a[i]> a[i+1]) return false;
	}
	return true;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int i;
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	if (sapxep(a, n)) printf("true");
	else if (!sapxep(a, n)) printf("false");
	return 0;
}
