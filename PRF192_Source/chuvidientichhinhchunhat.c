#include<stdio.h>

int main() {
	float chieudai, chieurong, chuvi, dientich ;
	printf ("nhap chieu dai: ");
	scanf("%f", &chieudai);
	printf ("nhap chieu rong: ");
	scanf("%f", &chieurong);
	printf("dientich = %f\n", chieudai*chieurong);
	printf("chuvi = %f\n", chieudai*2+chieurong*2);
	return 0;
}

