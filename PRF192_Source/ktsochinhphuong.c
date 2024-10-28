#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
	int n;
	scanf("%d", &n);
	int i;
	for (i=0; i<n; i++){
		if (sqrt(n)==i){
			printf("%d la so chinh phuong", n);
			break;
		}
		}
		if (sqrt (n)!= i){
			printf("%d khong la so chinh phuong", n);
	}
	return 0;
}
