#include <stdio.h>
#include <math.h>

int main()
{
    int C, I, A, sum=0;
    printf("multiplication table of number : ");
    scanf("%d", &C);
    for (I = 1; I < 11; I++)
    {
        A = C * I;
        sum += A;
    }
    printf("%d", sum);
    return 0;
}