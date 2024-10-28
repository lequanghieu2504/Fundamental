#include <stdio.h>
#include <stdbool.h>

bool isprime(int n){
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0) return false;
	int i;
	for(i=3; i*i<=n; i+=2){
		if (n%i==0) return false;
	}
	return true;
}

void callprime(int n, int a[]){
	int t=0;
	int i=n;
	while (t!=n){
			if(isprime(i)){
				a[t]=i;
				printf ("%d ", a[t]);
				t+=1;
				i++;
			}
			else {
				i++;
			}
		}
	}

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	int t=n-1;
	int a[t];
	callprime(n, a);
	return 0;
}
