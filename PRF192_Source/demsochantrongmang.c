#include <stdio.h>

void printArr(int a[], int n){
	int i;
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	printf("\n");
}

void inputArr(int a[], int n){
	int i;	
	// nhap gia tri vao tung o trong mang
	for (i = 0 ; i < n; i++)
		scanf("%d", &a[i]);	
	
}
int timchanle(int a[], int n){
	int sole=0, sochan=0, i;
	for(i=0; i<n; i++){
	if (a[i]%2==0){
		sochan++;
	}
	else { sole++;
	}
}
	printf("so chan: %d\nso le:%d",sochan, sole);
}

int main(){
	int arr[100];
	int m, i,count=0;
	// nhap so luong phan tu
	printf("Input n = ");
	scanf("%d", &m);
	
	// in ra 
	inputArr(arr, m);
	printArr(arr, m);
	timchanle(arr,m);
	return 0;	
}
