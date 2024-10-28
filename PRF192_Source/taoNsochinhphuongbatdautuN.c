#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool ktscp(int n) {
    int a = sqrt(n);
    return (a * a == n);
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n-1];
    int i=0;
    int t=n;
    while(i<n){
        if (ktscp(t)){
            a[i]=t;
            printf("%d ", a[i]);
            i=i+1;
        }
            t++;
    }
    return 0;
}
