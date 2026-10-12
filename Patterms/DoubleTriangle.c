#include<stdio.h>
int main()
{
    int n;
    printf("Enter height of triangle: ");
    scanf("%d", &n);
    int b=65;
    int nst=n;
    int nsp=1;
    for(int m=1; m<=2*n+1; m++)
    {
        printf("%c ", b);
        b++;
    }
    printf("\n");
    for(int i=1; i<=n; i++)
    {
        int a=65;
        for(int j=1; j<=nst; j++)
        {
            printf("%c ", a);
            a++;
        }
        for(int k=1; k<=nsp; k++)
        {
            printf("  ");
            a++;
        }
        for(int j=1; j<=nst; j++)
        {
            printf("%c ", a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}