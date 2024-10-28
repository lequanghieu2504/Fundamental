#include<stdio.h>

int main() {
	float a,b,c, chuvi, dientich ;
	printf ("nhap canh a: ");
	scanf("%f", &a);
	printf ("nhap canh b: ");
	scanf("%f", &b);
	printf ("nhap canh c: ");
	scanf("%f", &c);
	printf("chu vi = %f\n", a+b+c);
	float nuachuvi=(a+b+c)/2;
	printf("dien tich = %f", sqrt(nuachuvi*(nuachuvi-a)*(nuachuvi-b)*(nuachuvi-c)));
	return 0;
}

