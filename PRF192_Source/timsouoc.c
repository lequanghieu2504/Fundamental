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
			uoc += 1;
		}
	}
	printf("%d", uoc);
	return 0;
}
