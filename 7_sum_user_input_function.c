#include<stdio.h>

int sum(int a ,int b);

int main()
{
    int a,b,c;
    printf("Enter the value of first number : ");
    scanf("%d",&a);
    printf("Enter the value of secong number : ");
    scanf("%d",&b);
    c = sum(a,b);
    printf("The value of sum of these number is : %d",c);
    return 0;
}
int sum(int a ,int b)
{
   int petra;
   petra = a+b;
   return petra;
}