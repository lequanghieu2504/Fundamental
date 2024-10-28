#include <stdio.h>
#include <stdbool.h>

bool ktchuoitang(int n, int a[]){
	int k=a[1]-a[0];
	int i;
	for (i=0; i<n-1; i++){
		if (a[i+1]-a[i]!=k){
			return false;
			break;
		}
	}
	return true;
}

int main(){
	int n; 
	scanf("%d", &n);
	int a[n];
	int i; 
	for (i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	if(ktchuoitang(n, a)){
		printf("true");
	}
	else {
		printf("false");
	}
	return 0;
}
