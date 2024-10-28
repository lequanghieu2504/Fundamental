#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool prime(int n){
	int i;
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0) return false;
	for (i=3; i*i<=n; i+=2){
		if (n%i==0){
			return false; 
		}
	}
}
bool semi_prime(int n){
	int i;
	if (n<4) return false;
	if (n==4) return true;
	for (i=1; i<=n; i++){
		if (n%i==0){
			int smp=n/i;
			if(prime(i)&&prime(smp)){
				return true;
			}
		}
	}
	return false;
}
int main(){
	int n;
	scanf("%d", &n);
	if (semi_prime(n)){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
