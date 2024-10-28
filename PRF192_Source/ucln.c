#include <stdio.h>
#include <stdlib.h>
int timucln(int a, int b){
		while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", timucln(a,b));
	return 0;
}
