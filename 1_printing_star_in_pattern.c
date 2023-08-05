#include<stdio.h>

void star(int a);

int main()
{
    int a;
    printf("Number of line in which you want this patter : ");
    scanf("%d",&a);
    star(a);
    return 0;
}
void star(int a)
{
    if (a==1)
    {
        printf("*\n");
        return;
    }
    star(a - 1);
    int q;
    for ( q = 1; q <= (a*2-1); q++)
    {
        printf("*");
    }
    printf("\n");
     
}