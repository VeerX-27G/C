#include <stdio.h>
int main()
{
    int n;
    printf("Enter a height of triangle: ");
    scanf("%d", &n);
    int nsp=0;
    int nst=n;
    for(int p=1; p<=n; p++)
    printf("%d ", p);
    for(int q=n-1; q>=1; q--)
    printf("%d ", q);
    printf("\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=nst-1; j++)
        printf("%d ", j);
        for(int k=1; k<=nsp+1; k++)
        printf("  ");
        for(int t=nst-1; t>=1; t--)
        printf("%d ", t);
        printf("\n");
        nsp+=2;
        nst--;
    }
    return 0;
}