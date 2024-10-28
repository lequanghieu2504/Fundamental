#include <stdio.h>
#include <stdlib.h>
int countbit (int n){
    int count=0;
    while (n!=0){
        if (n%2==1){
            count++;
        }
        n/=2;
    }
    return count;
}
int main(){
    int n;
    scanf ("%d", &n);
    printf("%d", countbit(n));
    return 0;
}

