#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuanhoa( char name[] ){
	int i, x;
	int n=strlen(name);
//	xoa ki tu trang dau dong
	while(name[0]==' '){
		for(i=0; i<n-1; i++){
			name[i]=name[i+1];
		}
		n--;
	}
	name[n]='\0';
	
//	xoa khoang trang giua mang
 	for (i=0; i<n-1; i++){
 		if (name[i]==' '&& name[i+1]==' '){
 			for (x=i; x<n-1; x++){
				name[x]=name[x+1];
			}
		n--;
		i--;		
		}
	}
	name[n]='\0';
	
//	xoa ki tu cuoi  mang
	i=n-1;
	while (name[i]==' '){
		name[i]='\0';
		n--;
		i--;
	}
}

int main (){
	printf("nhap ten: ");
	char name[100];
	fgets(name, sizeof(name), stdin);
	int len=strlen(name);
	if(len > 0 && name[len-1]=='\n'){
		name[len-1]='\0';
	}
	chuanhoa(name);
	printf("sau khi chuan hoa: %s", name);
	return 0;
}
