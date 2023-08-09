#include <stdio.h>
#include <math.h>

int main()
{
    int a, sum = 0, n;
    printf("Enter the value of N upto which you wanted to sum : ");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        sum += a;
    }
    printf("the sum of first n natural numver is : %d", sum);

    return 0;
}