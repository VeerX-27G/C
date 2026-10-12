//HCF: Highest Common Factor 
#include<stdio.h>
int min(int a, int b)
{
    if(a<b)
    return a;
    else
    return b;
}
int HCF(int a, int b)
{
    
    int hcf;
    for(int i=min(a,b); i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main()
{
    int a;
    printf("Enter 1st no. : ");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd no. : ");
    scanf("%d", &b);

    int hcf = HCF(a,b);
    printf("The HCF of %d and %d is: %d", a, b, hcf);
    return 0;
}