#include<stdio.h>
#include<math.h>
double tinhdthv(int xa,int ya,int xi,int yi){
	double ai;
	double canh;
	ai=sqrt((xa - xi)*(xa - xi) + (ya - yi)*(ya - yi));
	canh=ai*2/sqrt(2);
	double s=canh*canh;
	return s;
}
int main(){
	float xa,ya,xi,yi;
	float ai, canh, s;
	scanf("%f%f%f%f", &xa, &ya, &xi, &yi);
	printf("dien tich hinh vuong la %.2f", tinhdthv(xa, ya, xi, yi));
	return 0;
}
