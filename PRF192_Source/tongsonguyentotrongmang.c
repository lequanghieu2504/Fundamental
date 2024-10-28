#include <stdio.h>
#include <stdbool.h>

bool isprime(int n){
	int i;
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0) return false;
	for (i=3; i*i<=n; i+=2){
		if (n%i==0) return false;
	}
	return true;
}
int sumprime(int a[], int n){
	int i, sum=0;
	for (i=0; i<n; i++){
		if (isprime(a[i])){
			sum+=a[i];
		}
	}
	return sum;
}
int main(){
	int n;
	int i;
	scanf("%d", &n);
	int a[n];
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for (i=0; i<n; i++){
		printf("%d\t", a[i]);
	}
	printf("\n%d",sumprime(a, n));
	return 0;	
}
