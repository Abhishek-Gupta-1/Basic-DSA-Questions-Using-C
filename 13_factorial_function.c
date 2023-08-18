#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n);

int main()
{
    int k;
    printf("Enter any +ve number which you want factorial of : ");
    scanf("%d", &k);
    printf("Factorial of %d is : %d", k, factorial(k));
    return 0;
}

int factorial( int z)
{
    int f;
    if (z == 1)
    {
        return 1;
    }
    else
    {
        f = z * factorial(z - 1);
        return f;
    }
}
