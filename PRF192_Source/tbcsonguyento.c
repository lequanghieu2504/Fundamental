#include <stdio.h>
#include <stdbool.h>
bool prime(int num) {
    if (num <= 1) {
        return false;
    }
    int i;
    for ( i = 2; i*i<= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int a, b, count;
    scanf("%d %d", &a, &b);

    int i,sum = 0;
    for ( i = a; i <= b; i++) {
        if (prime(i)) {
            sum += i;
            count ++;
        }
    }
    float tbc = sum*1.0/count;
    printf("tbc cac so nguyen to tu %d den %d la %.2f", a, b, tbc);
    printf(count);
    return 0;
}

