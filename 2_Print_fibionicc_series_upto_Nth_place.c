#include <stdio.h>
// fibonicc series :- 1,1,2,3,5,8,13,21,34,55
int fibonicc(int n);

int main()
{
    int n, z, i;
    printf(" Fibionic series upto  : ");
    scanf("%d", &n);
    printf(" fibionicc series ");
    for (i = 0; i < n; i++)
    {
        z = fibonicc(i);
        printf(" %d ", z);
    }
    return 0;
}
int fibonicc(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        int x;
        x = fibonicc(n - 1) + fibonicc(n - 2);
        return x;
    }
}