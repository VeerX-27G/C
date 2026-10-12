#include <stdio.h>
int main()
{
    int m;
    printf("Enter height of parallelogram: ");
    scanf("%d", &m);
    int n;
    printf("Enter base of parallelogram: ");
    scanf("%d", &n);
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=m-i; j++)
        printf("  ");
        for(int k=1; k<=n; k++)
        printf("* ");
        printf("\n");
    }
    return 0;
}