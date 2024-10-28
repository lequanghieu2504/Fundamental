#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int n,k;
	scanf("%d%d", &n,&k);
	if (n<k){
		printf("sai de bai");
	}
	int i=n/k;
	printf("%d", i);
	return 0;
}
