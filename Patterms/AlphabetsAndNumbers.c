#include <stdio.h>
int main()
{
    int n;
    printf("Enter a height of triangle: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        int a = 1;
        for(int j=1; j<=i; j++)
        {
            if(i%2==0)
            {
                int b = a+64;
                char ch = (char)b;
                printf("%c ", ch);
                a++;
            }
            else
            {
                printf("%d ", j);
            }
        }  
        printf("\n");
    }
    return 0;
}