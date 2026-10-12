#include<stdio.h>
int factorial(int x)
{
    int f = 1;
    for(int i=2; i<=x; i++)
    f = f*i;
    return f;
}
int permutation(int n, int r)
{
    int nPr = factorial(n)/factorial(n-r);
    return nPr;
}
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int r;
    printf("Enter r: ");
    scanf("%d", &r);
    
    int nPr = permutation(n,r);
    printf("%d_P_%d = %d", n, r, nPr);
}