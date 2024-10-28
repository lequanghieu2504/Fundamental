#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	int i;
	float sum=0;
	for (i=1; i<=n; i++){
		sum +=1.0/i;
	}
	printf("%.3f", sum);
	return 0;
}
