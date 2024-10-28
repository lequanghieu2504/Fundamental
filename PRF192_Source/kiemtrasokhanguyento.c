#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool prime(int n){
    if (n<2) return false;
    int i;
    if  (n==2) return true;
    if  (n%2==0) return false;
    for (i=3; i*i<=n; i+=2){
        if (n%i==0){
            return false;
    }
}
return true;
}
int main(){
    int n;
    int i;
    bool check=true;
    scanf("%d", &n);
    for(i=2; i*i<=n; i++){
        if(n%i==0){
            if (!prime(i)){
               check = false;
               break;
            }
        }
    }
    if (!check) {
            printf("day khong la so kha nguyen to");
    }
    if (check) {
            printf("day la so kha nguyen to");
    }
    return 0;
}
