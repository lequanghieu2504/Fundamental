#include <stdio.h>

void demphantudouble (int a[], int n){
    int i, j;
    int found = 0; // To check if any duplicates are found
    for (i=0; i<n; i++){
        for (j=i+1; j<n; j++){
            if (a[i] == a[j]) {
                printf("%d ", a[i]);
                found = 1;
                break; // Once a duplicate is found for a[i], move to the next element
            }
        }
    }
    if (!found) {
        printf("No duplicates found");
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

