#include<stdio.h>

int force(int m);

int main()
{
    int m;
    printf("Enter the mass of the body : ");
    scanf("%d",&m);
    force(m);
    return 0;
}
int force(int m)
{
    int x;
    x= m*9.8;
    printf("Force Exerted on the body due to gravitation is : %d",x);
}