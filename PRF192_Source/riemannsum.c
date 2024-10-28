#include <stdio.h>
#include <math.h>

int main()
{
    int t[100];
    int bac;
    printf("Nhap bac da thuc: ");
    scanf("%d", &bac);
    int r;
    int i;
    for (i = bac; i >= 0; i--)
    {
        printf("Nhap bac %d: ", i);
        scanf("%d", &r);
        t[i] = r;
    }

    printf("Phuong trinh co dang: f(x) = ");
    for (i = bac; i >= 0; i--)
    {
        if (i == 0)
        {
            printf("%d.", t[0]);
            break;
        }
        printf("%dx^%d + ", t[i], i);
    }

    printf("\nNhap khoang [a, b]:\n");

    double a;
    printf("Nhap a: ");
    scanf("%lf", &a);

    double b;
    printf("Nhap b: ");
    scanf("%lf", &b);

    int n;
    printf("Nhap so lan tach: n = ");
    scanf("%d", &n);

    double delta = (double)(b - a) / n;
    printf("=> Delta x = %lf", delta);

    double x1 = a + delta;
    double sum = 0;
    int j;
    while (x1 <= b)
    {
        for (j = bac; j >= 0; j--)
            sum += t[j] * pow(x1, j);
        x1 += delta;
    }
    printf("\n=> Ket qua: %f", sum * delta);

    printf("\nCho em xin diem cong nha <3");
    return 0;
}

