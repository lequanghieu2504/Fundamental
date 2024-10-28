#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	int solonnhat(int n){
		char t[100] ;
		snprintf(t, sizeof(t), "%d", n);
		char max[20];
		strcpy(max, t);
		int len=strlen(t);
		int i;
		char a[100];
		a[100]=t[100];
		for(i=0; i<len-1; i++){
			t[i+1]=t[i];
			printf("%c ", t[i]);
		}
		t[0]=a[len-1];
		  // Cap nhat max neu chuoi hien tai lon hon
        if (strcmp(t, max) > 0) { // So sanh chuoi htai vs max
            strcpy(max, t); // neu lon hon thi chon max
        }
    // Chuyen chuoi tro lai thành so nguyen
    return atoi(max); // Tra ve gia tri so nguyen cua chuoi lon nhat
	}
	int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Largest number is: %d\n", solonnhat(n));
    return 0;
}

