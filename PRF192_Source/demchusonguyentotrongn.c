#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool prime(int n) {
	int i;
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for ( i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n,i,count = 0;
    scanf("%d", &n);
   	while(n){
   		int t=n%10;
   		if(prime(t)){
   			count++;
		   }
		n /=10;
	    }
    printf("%d\n", count);
    return 0;
}
