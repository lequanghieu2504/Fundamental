#include <stdio.h>
#include <string.h>
#include <ctype.h>

void xoakitutaivitri(int p, char s[]){
	int i;
	for (i=p; i<(sizeof(s)); i++){
		s[i]=s[i+1];
	}
}

int main(){
	char s[100];
	int p;
	printf("nhap mang: ");
	scanf("%s", &s);
	printf("nhap vi tri muon xoa: ");
	scanf("%d", &p);
	xoakitutaivitri(p,s);
	printf("%s", s);
	return 0;
}
