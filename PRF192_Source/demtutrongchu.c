#include <stdio.h>
#include <ctype.h>
#include <string.h>

int dem(char s[]){
    int i;
    int dem = 0;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            dem++;
        }
    }
    return dem;
}

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    int len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    int demSpaces = dem(name);
    printf("so ki tu: %d\n", demSpaces+1);

    return 0;
}

