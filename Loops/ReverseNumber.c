#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int l=n;
    int r=0;
    int last_digit=0;
    while(n>0)
    {
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("The reverse number is %d\n", r);
    return 0;
}