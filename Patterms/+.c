#include <stdio.h>
int main()
{
    int n;
    printf("Enter a limit: ");
    scanf("%d", &n);
    if(n%2!=0)
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            int a = n/2+1;
            if(j==a || i==a)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    else
    printf("This function only works under odd numbers");
    return 0;
}