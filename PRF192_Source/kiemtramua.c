#include<stdio.h>

int main() {
	int thang;
	printf("nhap thang: ");
	scanf("%d", &thang);
	if (thang<=1 || thang <= 12){
		switch(thang);
			case 1: case 2: case 3:
				printf("mua xuan"); break;
			case 4: case 5: case 6:
				printf("mua he"); break;
			case 7: case 8: case 9:
				printf("mua thu"); break;
			case 10: case 11: case 12:
				printf("mua dong"); break;
	}
	else{
		printf("lam gi co thang %d", thang);
	}
	return 0;
}

