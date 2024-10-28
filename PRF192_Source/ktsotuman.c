#include <stdio.h>
#include <math.h>
int demsomu(int n){
	int a=n;
	int i=0;
	int sum=0;
	while(a!=0){
		a/=10;
		i++;
	}
	a=n;
	while(a!=0){
		int m=a%10;
		sum+= pow(m,i);
		a/=10;
	}
	return sum;
}
int main(){
	int n;
	scanf("%d", &n);
	if(n==demsomu(n)){
		printf("day la so tu man");
	}
	else{
		printf("day khong phai la so tu man");
	}
	return 0;
}
