//AP: Arithmetic Progression
#include<stdio.h>
int main()
{
    float a;
    printf("Enter the first term: ");
    scanf("%f", &a);
    float d;
    printf("Enter the common difference: ");
    scanf("%f", &d);
    int n;
    if(n>0)
    {
        printf("Enter the no. of terms: ");
        scanf("%d", &n);
    }
    for(float i=a; i<=a+(n-1)*d; i=i+d)
    {
        printf("%f ", i);
    }
    return 0;
}