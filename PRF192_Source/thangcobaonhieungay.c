#include <stdio.h>
#include <stdlib.h>
int main(){
	int thang;
	printf("nhap thang: ");
	scanf("%d", &thang);
	if(thang==1 || thang==3 || thang==5 || thang==7 || thang ==8 || thang==10 || thang==12){
		printf("thang %d co 31 ngay", thang);
	}
	else if(thang==4 || thang==6 || thang==9 || thang==11){
		printf("thang %d co 30 ngay", thang);
	}
	else if (thang==2){
		printf("thang 2 co 28 hoac 29 ngay");
	}
	else {
		printf("lam gi co thang %d", thang);
	}
	return 0;
}
