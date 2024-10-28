#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool chanle(int n){
    return n%2==0;
}

void hoathuongsole(char a[]){
    int i=0;
    int dem=0;
    a[0]=toupper(a[0]);
    while (a[i]!='\0'){
        i++;
        if (a[i]==' '){
            dem++;
            if(!chanle(dem)){
                a[i+1]= tolower(a[i+1]);
            }
            else if(chanle(dem)){
                a[i+1]= toupper(a[i+1]);
            }
        }
    }
}
int main(){
    char a[1000];
    fgets(a, sizeof(a), stdin);
    hoathuongsole(a);
    printf("%s", a);
    return 0;
}
