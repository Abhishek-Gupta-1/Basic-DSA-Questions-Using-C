#include<stdio.h>

int average(int a ,int b,int c);

int main()
{
    int a,b,c;
    printf("Enter all three numb. (seprate with comma) : ");
    scanf("%d, %d, %d",&a,&b,&c);
    average(a ,b,c);
    return 0;
}
int average(int a ,int b,int c)
{
    int x;
    x=(a+b+c)/3;
    printf("Average of 3 number is : %d",x);
}