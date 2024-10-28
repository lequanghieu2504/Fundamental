#include <stdio.h>
#include <string.h>
#include <ctype.h>

int num (char let){
   return let - 'a' + 1;
}
int lettonum(char let[]){
    int i=0;
    int tong=(num(let[0]));
    for(i=1; i<strlen(let)-1; i++){
        if (num(let[i])>=10) tong=tong*100+num(let[i]);
        else if (num(let[i])<10) tong=tong*10+num(let[i]);
    }
    return tong;
}

int main(){
    char w[100];
    char s[100];
    printf("nhap chuoi ki tu dau: ");
    fgets(w, sizeof(w), stdin);
    printf("nhap chuoi ki tu sau: ");
    fgets(s, sizeof(s), stdin);
    printf("so dau: %d\n", lettonum(w));
    printf("so dau: %d\n", lettonum(s));
    int tong= lettonum(w) + lettonum(s);
    printf("tong cua 2 so do la: %d", tong);
    return 0;
}
