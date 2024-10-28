#include<stdio.h>
#include<stdbool.h>

bool checkdoixung(int a[], int n){
    int i;
    int count;
    int dem=0;
    if (n%2==0){
        count=n/2;
    }
    else if(n%2!=0){
        count=n/2+1;
    }
    n-=1;
    for(i=0; i<=n; i++){
        if (a[i]==a[n]){
            dem++;
            n--;
        }
        else if(a[i]!=a[n])
        break;
    }
    return dem==count;
}

int main(){
    int i,n;
    printf("so gia tri trong mang: ");
    scanf("%d", &n);
    printf("nhap mang: ");
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    if(checkdoixung(a,n)) printf("day la mang doi xung");
    else if(!checkdoixung(a,n)) printf("day la mang khong doi xung");
    return 0;
}
