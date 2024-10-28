#include <stdio.h>
#include <string.h>
#include <ctype.h>

void createemail(char name[]){
	int size=strlen(name);
	int i;
	int kitu=0;
	for(i=0; i<size; i++){
		name[i]=tolower(name[i]);
	}
	for(i=size-1; i>=0; i--){
		if (name[i]==' '){
			for (i=(size-kitu); i<=size; i++){
				printf("%c", name[i]);
			}
			break;
	}
		kitu+=1;
	}
	printf("%c", name[0]);
	for(i=0; i<(size-kitu-1); i++){
	    if (name[i]==' '){ 
	        printf("%c", name[i+1]);
	    }
    }
}

int main(){
    char name[100];
    printf("Nhap ten hoc sinh: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Dang email: ");
    createemail(name);
    return 0;
}
