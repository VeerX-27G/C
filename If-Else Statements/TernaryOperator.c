//This is only useful if we want to print if and else statements with condition one line
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    n<=9 ? printf("This is True") : printf("This is false");
    return 0;
}