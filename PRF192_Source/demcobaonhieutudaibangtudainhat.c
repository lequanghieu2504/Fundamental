#include <stdio.h>
#include <string.h>
#include <ctype.h>

int timTuDaiNhat(char a[]) {
    int max=0;
    int max_pos=0;
    int c_len;
    int pos;
    int i=0;
    // xoa ki tu trang dau chuoi
    while (a[i]!='\0'){
        if (isspace(a[i])) {
            i++;
        }
    c_len = 0;
    pos = i;
    // dem ki tu 
    while (a[i]!=' ' && a[i]!='\0'){
        c_len++;
        i++;
    }
    // tim max va maxpos
    if (c_len>max){
        max = c_len;
    }
    }
    return max;
}

int dem(char a[]){
	int count=0;
	int i=0;
	int pos=0;
	int c_len=0;
	int max = timTuDaiNhat(a);
	while (a[i]!='\0'){
        if (isspace(a[i])) {
            i++;
        }
    c_len = 0;
    pos = i;
    // dem ki tu 
    while (a[i]!=' ' && a[i]!='\0'){
        c_len++;
        i++;
    }
    if (c_len==max){
    	count++;
	    }
    }
    return count;
}

int main(){
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // loai bo ki tu xuong dong
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    printf("co %d tu dai bang tu dai nhat", dem(str));
    return 0;
}
