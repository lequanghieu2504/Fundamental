#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n,i,count = 0;
    scanf("%d", &n);
   	while(n){
   		int t=n%10;
   		if(t==2 || t==3|| t==5 || t==7){
   			count++;
		   }
		n /=10;
	    }
    printf("%d\n", count);
    return 0;
}
