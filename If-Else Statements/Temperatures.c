#include<stdio.h>
int main()
{
    float k;
    printf("Enter the value of temp. in kelvin: ");
    scanf("%f", &k);
    if(k<0)
    printf("The value of 'k' can't be less than 0");
    else
    {
        float c = k-273.15;
        printf("Celcius: %f'C\n", c);
        float f = (c*9.0/5.0)+32;
        printf("Farhenhiet: %f'F", f);
    }
    return 0;
}