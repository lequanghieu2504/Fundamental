#include <stdio.h>
#include <string.h>

int demtu(char a[]) {
    int n = strlen(a);
    int i;
    int count = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == ' ') count += 1;
    }
    return count + 1; // So tu = so khoang trang + 1
}

void timvitri(int n, int boi[100], int *boi_count) {
    int i;
    int j = 0;
    int k; 
    int uoc[100];
    // Tim cac uoc cua n
    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            uoc[j] = i;
            j++;
        }
    }
    int c = 0;
    // Tim cac vi tri boi cua cac uoc
    for (i = 2; i < n; i++) {
        for (k = 0; k < j; k++) { // Su dung bien k da khai bao o ngoai
            if (i % uoc[k] == 0) {
                boi[c] = i; // Luu chi so tu (bat dau tu 0)
                c++;
                break; // Thoat khoi vong lap trong khi tim uoc
            }
        }
    }
    *boi_count = c; // Gan so luong phan tu hop le cho boi_count
}

void in_tu(char s[], int vi_tri) {
    int i = 0;
    int current_word = 0;
    int start_index = 0;
    // Tim vi tri bat dau cua tu o chi so vi_tri
    while (s[i] != '\0') {
        if (current_word == vi_tri) {
            start_index = i;
            while (s[start_index] != ' ' && s[start_index] != '\0' && s[start_index] != '\n') {
                printf("%c", s[start_index]);
                start_index++;
            }
            printf(" ");
            return;
        }
        if (s[i] == ' ') {
            current_word++;
        }
        i++;
    }
}

int main() {
    char s[1000];
    printf("Nhap: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; // Xoa ky tu xuong dong o cuoi chuoi
    int n = demtu(s);
    int boi[100];
    int boi_count; // Bien dem so phan tu hop le trong mang boi
    
    timvitri(n, boi, &boi_count);
    
    printf("Tin nhan bi mat: ");
    int i; // Khai bao int o ngoai
    int t=0;
    while (s[t]!=' '){
    	printf("%c", s[t]);
    	t++;
	}
	printf (" ");
    for (i = 0; i < boi_count; i++) {
        in_tu(s, boi[i]);
    }
    printf("\n");

    return 0;
}

