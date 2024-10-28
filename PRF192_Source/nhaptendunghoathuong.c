#include <stdio.h>
#include <string.h>
#include <ctype.h>

void tolowercase(char name[]){
	int i;
	for (i=0; name[i] !='\0'; i++){
		name[i]=tolower(name[i]);
	}
}

void touppercase(char name[]){
	int i;
	name[0]=toupper(name[0]);
	for (i=0; name[i] != '\0'; i++){
		if(name[i]==' '){
			name[i+1]=toupper(name[i+1]);
		}
	}
}

int main(){
	char name[100];
	printf("Nhap ten: ");
	fgets(name, sizeof(name), stdin);
	tolowercase(name);
	touppercase(name);
	printf("Ten sau khi sua la: %s", name);
	return 0;
}
