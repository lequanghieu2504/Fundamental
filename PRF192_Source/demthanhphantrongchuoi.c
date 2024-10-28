#include <stdio.h>
#include <ctype.h>

int main(){
	char email[100];
	fgets(email, sizeof(email), stdin);
	int a=0; 
	int n=0;
	int s=0;
	int i;
	while(email[i] !=0){
		if(isalpha(email[i])){
			a++;
		}
		else if(isdigit(email[i])){
			n++;
		}
		else {
			s++;
		}
		i++;
	}
	printf("alphabet: %d\n", a);
	printf("number: %d\n", n);
	printf("special: %d\n", s);
	return 0;
}
