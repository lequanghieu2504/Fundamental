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
int main (){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b) {
        printf("nhap sai gia tri, gia tri cua a phai be hon b");
        return 1;
    }
	int i;
	for (i=b; i>=a; i--){
	if (prime (i)){
		printf("so nguyen to lon nhat trong khoang tu %d den %d la %d ",a,b, i);
		break;
	}
	else {
		printf("-1");
		break;
	}
	}
	return 0;
}
