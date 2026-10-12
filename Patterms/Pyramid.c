#include <stdio.h>
int main()
{
    int n;
    printf("Enter a height of pyramid: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        int a = i-1;
        int b = 1;
        int c = 1;
        for(int j=1; j<=n-i; j++)
        printf("  ");
        for(int k=1; k<=i; k++)
        {
            b = k+64;
            printf("%c ", b);
        }
        for(int t=1; t<=i-1; t++)
        {
            c = a+64;
            printf("%c ", c);
            a--;
        }
        printf("\n");
    }
    return 0;
}