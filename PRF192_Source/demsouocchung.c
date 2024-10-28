#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int a,b,c;
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
	int i;
	c=0;
	for (i=1;i<=a; i++){
		if (a%i==0){
			c+=1;
		}
	}
	printf("co %d so la uoc chung", c);
	return 0;
}
