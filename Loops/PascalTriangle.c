#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<=n-1; i++)
    {
        for(int j=1; j<=n-i; j++)
        printf("  ");
        int first = 1;
        for(int k=0; k<=i; k++)
        {
            printf("%d ", first);
            first = first * (i-k)/(k+1);
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}