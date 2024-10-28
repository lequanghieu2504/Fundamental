#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool prime (int n){
	int i;
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0) return false;
	for (i=3; i*i<=n; i+=2){
		if (n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	scanf("%d", &n);
	int a=n+1;
	while (!prime(a)){
		a++;
	}
	printf("%d %d",a, a-n);
	return 0;
}
