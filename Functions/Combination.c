#include<stdio.h>
int factorial(int x)
{
    int f = 1;
    for(int i=2; i<=x; i++)
    f = f*i;
    return f;
}
int combination(int n, int r)
{
    int nCr = factorial(n)/(factorial(r) * factorial(n-r));
    return nCr;
}
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int r;
    printf("Enter r: ");
    scanf("%d", &r);
    
    int nCr = combination(n,r);
    printf("%d_C_%d = %d", n, r, nCr);
}