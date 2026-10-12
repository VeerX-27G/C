#include<stdio.h>
int main()
{
    int n;
    printf("Enter 1 or anything: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1: printf("This is just like if-else statements");
        break;
    default: printf("This is not very useful condition");
        break; 
    }
}