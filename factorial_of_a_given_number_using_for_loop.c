#include <stdio.h>
#include <math.h>

int main()
{
    int i,fact=1,n;
    printf("You want factorial of number : ");
    scanf("%d", &n);
    for (i = 1; i<=n; i++)
    {
        fact *= i;
    }
    printf("The factorial of number %d is %d",n,fact);
    return 0;
}