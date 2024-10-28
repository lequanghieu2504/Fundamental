#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool prime (int n){
	if (n<2) return false;
	if (n==2) return true;
	int i;
	if (n % 2 == 0) return false;
		for (i=3; i*i<=n; i+=2){
			if (n%i==0){
				return false;
		}
	}
	return true;
}
 int main(){
 	int n, i=1, m=0;
 	scanf ("%d", &n);
 	float s=0;
 	while (m<n){
 		i++;
 		if (prime(i)){
 			s +=1.0/i;
 			m++;
		}
	}
	printf("%f", s);
	return 0;
 }
