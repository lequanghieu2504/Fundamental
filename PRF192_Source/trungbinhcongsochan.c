#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	int i;
	int tbc=0; //trungbinhcong
	for (i=1; i<=n; i++){
		if(i%2==0){
			tbc += i;
		}
	}
	printf("%d", tbc/2);
	return 0;
}
