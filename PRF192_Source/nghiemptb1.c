#include<stdio.h>

int main() {
	float a,b,x;
	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	if(a!=0){
		x=-b/a;
		printf("phuong trinh co 1 nghiem la: %f", x);
		}
	else if(b==0){
		printf("phuong trinh co vo so nghiem");
	}
	else{
		printf ("phuong trinh vo nghiem");
		}
	return 0;
}

