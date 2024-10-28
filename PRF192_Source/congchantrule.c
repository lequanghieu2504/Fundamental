#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    scanf ("%d", &n);
    int i;
	int sum=1;
	for(i=2; i<=n; i++){
		if (i%2==0){
			sum+=i;
		}
		else if(i%2!=0){
			sum-=i;
		}
	}
	printf("%d", sum);
    return 0;
}
