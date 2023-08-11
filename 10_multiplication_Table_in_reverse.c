#include <stdio.h>
#include <math.h>

int main()
{
    int C,I,A;
    printf("You want multiplication table of number : ");
    scanf("%d", &C);
    for (I = 10; I ; I--)
    {
        A=C*I;
        printf("%d X %d = %d \n ",C,I,A);
        /* printf("%d ",c);  printf("X ");  printf("%d ", i);  printf("= ");  printf("%d \n", a); -> first I write like this :) (verry funny) */
    }

    return 0;
}