#include<stdio.h>
int main()
{
    int cp, sp;
    printf("Enter Cost Price: Rs.");
    scanf("%d", &cp);
    printf("Enter Selling Price: Rs.");
    scanf("%d", &sp);
    if(cp>sp)
    {
        if(cp<0 || sp<0)
        printf("Money can't be negative"); 
        else
        {
            int l = cp-sp;
            printf("Loss of Rs.%d", l);
        }
    }
    else if(sp>cp)
    {
        if(cp<0 || sp<0)
        printf("Money can't be negative");
        else
        {
            int p = sp-cp;
            printf("Profit of Rs.%d", p);
        }
    }
    else
    printf("Neither Profit nor Loss");
    return 0;
}