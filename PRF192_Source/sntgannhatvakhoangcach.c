#include<stdio.h>  
#include<stdbool.h>
bool isprime(int n){
    if (n<2) return false;
    if (n==2) return true;
    if (n%2==0) return false;
    int i;
    for (i=3; i*i<=n; i+=2){
        if (n%i==0) return false;
    }
    return true;
}
int nextprime(int n){
    int i;
    i=n;
    while (!isprime(i)){
        i++;
    }
    return i;
}
int khoangcachsnt(int n){
    int khoangcach;
    khoangcach = nextprime(n)-n; 
    return khoangcach;
}
int main(){
    int n;
    scanf ("%d", &n);
    printf("%d %d", nextprime(n), khoangcachsnt(n));
return 0;
}
