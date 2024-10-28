#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int a,b,i,t,n;
	scanf("%d", &a);
	scanf("%d", &b);
	for (i=a; i<=sqrt(b); i++){
		t=i*i;
		printf("%d ", t);
		break;
	}
	for (i=sqrt(b); i>=a; i--){
		t=i*i;
		printf("%d ", t);
		break;
	}
		return 0;
}
