#include <stdio.h>
int main()
{
    int n;
    int a[100];
    int sct;
    scanf ("%d", &n);
    int i,j;
    for ( i=0; i<n;i++){
        scanf ("%d", &a[i]);
    }
    scanf("%d", &sct);
    for (i=0; i<n;i++){
        for (j=i; j<n; j++){
            if (a[j] + a[i]==sct){
                printf ("%d %d", i,j);
        return 0;
    }
}
}
return 0;
}
