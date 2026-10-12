#include <stdio.h>
int main()
{
    int n;
    printf("Enter a height of triangle: ");
    scanf("%d", &n);
    int a=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        printf("  ");
        int a=1;
        for(int k=1; k<=i; k++)
        {
            int b = a+64;
            char ch = (char)b;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}