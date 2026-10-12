#include<stdio.h>
int main()
{ 
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1; i<=n; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d", sum);
        if(i<=n-1)
        {
            printf(" + ");
        }
    }
    printf(" = %d", sum);
    return 0;
}