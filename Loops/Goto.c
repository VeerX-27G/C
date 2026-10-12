#include<stdio.h>
void main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);
    int i = 1;
    START:
    printf("%d\n", i);
    i++;
    if(i<=n)
    goto START;
    printf("This is not very useful loop");
    return;
}