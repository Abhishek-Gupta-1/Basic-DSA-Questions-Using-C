#include <stdio.h>
#include <math.h>

int main()
{
    int C, I, A;
    printf("multiplication table of number : ");
    scanf("%d", &C);
    for (I = 1; I < 11; I++)
    {
        A = C * I;
        printf("%d" " X " "%d" " = " "%d \n",C,I,A);
    }
    




    return 0;
}