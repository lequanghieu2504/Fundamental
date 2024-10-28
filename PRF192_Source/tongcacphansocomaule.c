#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n;
	int m;
	printf("nhap n: ");
	scanf("%d", &n);
	m=2*n+1;
	int i;
	float sum=0;
	for (i=1; i<=m; i+=2){
		sum +=1.0/i;
	}
	printf("%.3f", sum);
	return 0;
}
