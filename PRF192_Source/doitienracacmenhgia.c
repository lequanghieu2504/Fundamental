#include <stdio.h>

int main() {
    int a, b,count=0, mottram=0, nammuoi=0, muoi=0, nam=0, mot=0;
    printf("nhap so tien: ");
    scanf("%d", &a);
    	while (a>=100){
    		a-=100;
    		count ++;
    		mottram++;
		}
			while (a>=50){
    		a-=50;
    		count ++;
    		nammuoi++;
		}
			while (a>=10){
    		a-=10;
    		count ++;
    		muoi++;
		}
			while (a>=5){
    		a-=5;
    		count ++;
    		nam++;
		}
			while (a>=1){
    		a-=1;
    		count ++;
    		mot++;
		}
	if (mottram != 0) printf("co %d to tien 100$\n", mottram);
	if (nammuoi != 0) printf("co %d to tien 50$\n", nammuoi);
	if (muoi != 0) printf("co %d to tien 10$\n", muoi);
	if (nam != 0) printf("co %d to tien 5$\n", nam);
	if (mot != 0) printf("co %d to tien 1$\n", mot);
    return 0;
}

