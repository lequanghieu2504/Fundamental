#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int timavr(int n){
	int i;
	int dem=0;
	int tong =0;
	float tbc=0.0;
	for (i=1; i<=n; i++){
		if (n%i==0){
			dem ++;
			tong = i+tong;
		}
	}
	tbc=tong*1.0/dem;
	return tbc;
}
int main(){
	int n;
	scanf("%d", &n);
	timavr(n);
	float avr=timavr(n);
	printf("%f", avr);
	return 0;
}
