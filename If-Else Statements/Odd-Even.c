#include<stdio.h>
int main()
{
    int n;
    printf("Enter any natural number: ", n);
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("Its Even");
    }
    else
    {
        printf("Its Odd" );
    }
    return 0;
}