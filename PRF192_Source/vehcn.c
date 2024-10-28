#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b;
    printf("nhap chieu dai: ");
    scanf("%d", &a);
    printf("nhap chieu rong: ");
    scanf("%d", &b);
    
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            printf("*   ");
        }
        printf("\n");
    }
    return 0;
}

