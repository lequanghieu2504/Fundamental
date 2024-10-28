#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,t = 0;
    scanf("%d", &n);
   	while(n>0){
   		t=n%10 + t*10;
		n /=10;
	    }
    printf("%d", t-1);
    return 0;
}
