#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isprime (int n){
    if(n<2) return false;
    if (n==2) return true;
    if (n%2==0) return false;
    int i;
    for (i=3; i*i<=n; i+=2){
        if (n%i==0) return false;
    }
    return true;
}

int demchuso(int n){
    int count=0;
    int t=n;
    while (t!=0){
        t/=10;
        count++;
    }
    return count;
}

bool kiemtramang(int n, int a[]){
	int i;
	for (i=0; i<100; i++){
		if (a[i]==n){
			return false;
		}
	}
	return true;
}

int demsnt (int n){
    int chia=(demchuso(n));
    int t;
    int p, du;
    int a[100];
    int count=0;
    while (chia!=1){
        p=pow(10, chia);
        du=pow(10, chia-1);
        t=(n/p)*du+(n%du);
        if (isprime(t)&&kiemtramang(t, a)){
        	a[count]=t;
            printf("%d\t", a[count]);
            count++;
        }
        chia=chia-1;
    }
    return count;
}
int main(){
    int n;
    printf("nhap so n: ");
    scanf("%d", &n);
    printf("\nsau khi tach thi co: %d so nguyen to", demsnt(n));
    return 0;
}
