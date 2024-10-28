#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, kq;
	scanf("%d", &n);
	
	int moc = 0;
	while (moc != 2){
		// 
		n = n + 1;
		// kiem tra so nguyen to cua n moi
		int dem = 0, i;
		for (i = 1; i <= n; i = i + 1)
			if (n % i == 0)
				dem = dem + 1;
		
		if (dem == 2) {
			kq=n;
			moc += 1;
		}
}
	printf("Ket qua: %d", kq);
	return 0;
}
