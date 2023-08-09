#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0, sum = 0, n;
    printf("Enter the value of N upto which you wanted to sum : ");
    scanf("%d", &n);
    do
    {
        a++;
        sum += a;
    } while (a < n);

    printf("the sum of first n natural numver is : %d", sum);

    return 0;
}