#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int lenN = 0;
	int m = n;
	int pow = 1;
	while (n != 0){
		n = n / 10;
		lenN += 1;
		pow = pow * 10;
	}	
	pow = pow / 10;
	n = m;
	int i;
	int max = n;
	for (i = 1; i <= lenN; i++){
		int dRight = n % 10; 
		n = n / 10;
		n = dRight*pow + n;
		if (n > max) max = n;
	}
	printf("%d", max);
	
}
