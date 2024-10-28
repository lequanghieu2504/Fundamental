#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int a,b;
    char op;	
	scanf("%d", &a);
	op = getchar();
	scanf("%d", &b);
	fflush(stdin);
	if(op=='+'){
		printf("%d",a+b);
	}
	else if(op=='-'){
		printf("%d",a-b);
	}
	else if(op=='*'){
		printf("%d",a*b);
	}
	else if(op=='/'){
		if(b!=0){
		printf("%d",a/b);
		}
	}
	else if(op=='%'){
	if(b!=0){
		printf("%d",a%b);
		}
	}
    return 0;
}

