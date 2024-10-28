#include <stdio.h>
#define MAX 100
#include <stdbool.h>

bool isprime(int n){
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0) return false;
	int i;
	for (i=3; i*i<=n; i+=2){
		if (n&i==0){
		return true;
		}
	}
	return true;
}

int timmaxsnt(int a[], int n){
	int max =-1;
	int i=0;
	for (i=0; i<n; i++){
		if (isprime(a[i])){
			if (max < a[i]){
				max = a[i];
			}
		}
	}
	return max;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int i=0;
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	printf("%d", timmaxsnt(a,n));
}
