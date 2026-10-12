#include<stdio.h>
int main()
{
    int a = 25;
    int *x = &a;
    int **y = &x;
    int ***z = &y;
    // This * can go to infinite

    printf("%d\n", a);
    printf("%d\n", *x);
    printf("%d", **y);
    return 0;   
}