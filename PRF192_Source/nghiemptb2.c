#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float a,b,c,delta;
	printf("tim nghiem cua phuong trinh ax^2 + bx + c = 0\n");
	printf("nhap a: ");
	scanf("%f", &a);
	printf("nhap b: ");
	scanf("%f", &b);
	printf("nhap c: ");
	scanf("%f", &c);
	delta = b * b - 4 * a * c;
	if(delta > 0){
		float x1 = (-b + sqrt(delta))/2*a;
		float x2 = (-b - sqrt(delta))/2*a;
		printf ("phuong trinh co 2 nghiem la: %.2f va %.2f", x1, x2);
	}
	else if(delta == 0){
		float x = -b/2*a;
		printf("phuong trinh co nghiem kep la: %.2f", x);
	}
	else {
		printf("phuong trinh vo nghiem");
	}
	return 0;
}
