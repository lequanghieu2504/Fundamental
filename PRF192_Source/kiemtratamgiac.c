#include<stdio.h>

int main() {
	float a,b,c;
	printf("nhap canh a: ");
	scanf("%f", &a);
	printf("nhap canh b: ");
	scanf("%f", &b);
	printf("nhap canh c: ");
	scanf("%f", &c);
	if(a>=0 && b>=0 && c>=0){
		if(a+b>c && a+c>b && b+c>a){
			printf("true");
		}
	else{
		printf ("false");
		}
	return 0;
}
}s
