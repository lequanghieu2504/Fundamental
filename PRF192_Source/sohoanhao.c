#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	int i;
	int uoc=0;
	for (i=1; i<=n; i++){
		if(n%i==0){
			uoc += i;
		}
	}
	if(uoc==n){
		printf("true");
	}
	else if(uoc!=n){
		printf("false");
	}
	return 0;
}
