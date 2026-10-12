#include <stdio.h>
int main()
{
    int n;
    printf("Enter the side of triangle: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(i>=27)
        printf("This function only works till 'Z'");
        else
        {
            int a = 1;
            for(int j=1; j<=i; j++)
            {
            int b = a+64;
            char ch = (char)b;
            printf("%c ", ch);
            a++;
            }
        }
        printf("\n");
    }
    return 0;
}