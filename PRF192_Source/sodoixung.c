#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,t = 0;
    scanf("%d", &n);
    int a=n;
   	while(n>0){
   		t=n%10 + t*10;
		n /=10;
	    }
	printf("%d\n",t);
    if (t==a) printf("true");
    else printf("false");
    return 0;
}
