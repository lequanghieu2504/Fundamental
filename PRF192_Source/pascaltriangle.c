#include <stdio.h>

int main(){
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    int i;
    int a=1;
    int b;
    for (i=0; i<n; i++){
        b=a;
		printf("%d\n", a);
        a=a*10+b;
    }
    return 0;
}

