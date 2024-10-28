#include<stdio.h>  
#include<stdbool.h>
int kttamgiac(int a, int b, int c){
    if (a+b>c & a+c >b & b+c>a) return true;
    else return false;
    return true;
}
int main(){
    int a,b,c;
    scanf ("%d %d %d", &a, &b, &c);
    if (kttamgiac(a,b,c)){
        printf("true");
    }
    else if (!kttamgiac(a,b,c)){
        printf("false");
    }
return 0;
}

