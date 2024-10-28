#include <stdio.h>
#include <string.h>

int countstring(char name[], int c){
	int i;
	int dem=0;
    for (i = 0; name[i] != 0; i++) {
        if (name[i]==c) dem+=1;
    }
    return dem;
}

int main() {
    char name[100];
    printf("Nhap ten: ");
    fgets(name, sizeof(name), stdin);
    char c;
    printf("Nhap ki tu: ");
    scanf("%c", &c);
    int dem=countstring(name, c);
    printf("Ki tu %c xuat hien %d lan",c,dem);
    return 0;
}

