#include<stdio.h>

int sum(int a , int b);

int main()
{   
    int c;
    c = sum(5,12);
    printf("The value of Sum is %d",c);
    return 0;
}
int sum(int a , int b)
{
    int hello;
    hello=a+b;
    return hello;
}
