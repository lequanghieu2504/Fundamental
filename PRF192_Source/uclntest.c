#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int a;
	int b;
	scanf("%d", &a);
	scanf("%d", &b);
	if(a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	printf("Uoc chung lon nhat la %d", a);
	return 0;
}
