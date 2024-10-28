#include <stdio.h>
#include <math.h>
int timchenhlech(int n){
	int dem=0;
	int i=n;
	while (n!=0){
		n=n/10;
		dem++;
	}
	dem/=2;
	n=i;
	int chiadoi = pow(10, dem);
	int phantruoc= n/chiadoi;
	int phansau= n%chiadoi;
	int sumpt=0;
	int sumps=0;
	while (phantruoc!=0){
		sumpt += (phantruoc%10);
		phantruoc/=10;
	}
		while (phansau!=0){
		sumps += (phansau%10);
		phansau/=10;
	}
	int chenhlech=abs(sumpt-sumps);
	return chenhlech;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d",timchenhlech(n));
	return 0;
}
