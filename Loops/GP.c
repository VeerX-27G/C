//Geometric Progression
#include<stdio.h>
int main()
{
    float a;
    printf("Enter the first term: ");
    scanf("%f", &a);
    float r;
    printf("Enter the common ratio: ");
    scanf("%f", &r);
    int n;
    if(n>0)
    {
        printf("Enter the no. of terms: ");
        scanf("%d", &n);
    }
    int power=1;
    for(int i=1; i<=n-1; i++)
    {
        power=power*r;
    }
    for(float j=a; j<=a*power; j=j*r)
    {
        printf("%f ", j);
    }
    return 0;
}