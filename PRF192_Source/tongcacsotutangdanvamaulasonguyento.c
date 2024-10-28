#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool prime (int n){
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0) return false;
	int i;
	for (i=3; i*i<=n; i+=2){
		if (n%i==0) return false;
	}
	return true;
}
int main(){
	int n;
	scanf("%d", &n);
	float sum=0;
	int i=2, count=0;
	while (count < n) {
        if (prime(i)) {
            sum += (count + 1) * 1.0 / i;
            count++;
        }
        i++;
    }
	printf("%f", sum);
	return 0;	
	}
