#include<stdio.h>
int main()
{
    float n;
    printf("Enter any number: ");
    scanf("%f", &n);
    int l;
    printf("Enter a limit of multiplication: ");
    scanf("%d", &l);
    for(float i=n; i<=n*l; i=i+n)
    {
        printf("%f ", i);
    }
    return 0;
}