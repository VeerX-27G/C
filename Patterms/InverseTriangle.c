#include <stdio.h>
int main()
{
    int n;
    printf("Enter a height of triangle: ");
    scanf("%d", &n);
    int nsp=0;
    int nst=n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=nsp; j++)
        printf("  ");
        for(int k=nst; k>=1; k--)
        printf("%d ", k);
        printf("\n");
        nsp++;
        nst--;
    }
    return 0;
}