#include<stdio.h>
int main()
{
    int i=1;
    int j=-1;
    while(i>0 && j<0)
    {
        printf("%d\n            %d\n", i,j);
        i++;
        j--;
    }
    return 0;
}