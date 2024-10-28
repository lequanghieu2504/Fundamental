#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int sum=0;
    scanf("%d", &n);   
	int i; 
    for ( i = 0; i <= n; i++) {
        sum +=i;
    }
    printf("%d", sum);
    return 0;
}

