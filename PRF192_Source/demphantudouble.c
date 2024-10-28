#include <stdio.h>
#include <stdbool.h>

bool ktmang (int s[], int t, int n){
	int i;
	for (i=0; i<n; i++){
		if (t==s[i]){
			return false;
		}
	}
	return true;
}

void demphantudouble (int a[], int n){
    int count=0;
    int b=0;
    int i, j;
    int s[b];
    for (i=0; i<n; i++){
        count = 0;
        for (j=0; j<n; j++){
            if (a[i] == a[j]) {
                count++;
                }
            }
        if (count == 2 && ktmang(s, a[i], b)){
        	s[b++]=a[i];
            printf ("%d ", a[i]);
		}
    }
}


int main(){
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    printf("nhap mang: ");
    int i;
    int a[n];
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    demphantudouble(a, n);
    return 0;
}

