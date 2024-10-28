#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main() {
    int a;
    scanf ("%d", &a);
    int i;
    bool n=true;
    if(a<2){
        n=false;
    }
    else{
    for (i=2; i<a; i++){
    if (a % i ==0) {
        n=false;
        break;
    }
    }
    }
    if(n){
    	printf("day la so nguyen to");
	}
	else {
		printf("day khong la so nguyen to");
	}
    return 0;
}
