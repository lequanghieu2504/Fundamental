#include <stdio.h>
#include <stdbool.h>

bool isprime(int n){
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0) return false;
	int i;
	for (i=3; i*i<=n; i+=2){
	if (n%i==0) return false;
	}
	return true;
}

int ktmangsnt(int n,int a[]){
	int i;
	int t=0;
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
		t=t*10+a[i];
	}
	if (isprime(t)) printf("true");
	else if(!isprime(t)) printf("false");
	return 0;
}

int main (){
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	int a[n];
	ktmangsnt(n, a);
	return 0;
}

