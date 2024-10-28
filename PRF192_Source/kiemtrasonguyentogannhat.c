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
	int b=n-1;
	while (!prime(a)){
		a++;
	}
	while (!prime(b)){
		b--;
	}
	if (a - n < n - b) {
	    printf("So nguyen to gan nhat voi %d la %d.\n", n, a);
	} 
	if (a - n == n - b) {
	    printf("So nguyen to gan nhat voi %d la %d.\n", n, b);
	} 
	else {
	    printf("So nguyen to gan nhat voi %d la %d.\n", n, b);
	}
	return 0;
}
