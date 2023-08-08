#include<stdio.h>

int area(int a);

int main()
{
    int x;
    area(x);
    return 0;
}
int area(int a)
{  
   int g,x;
   printf("Enter the value of square side : ");
   scanf("%d",&x);
   g=x*x;
   printf("The value of area is : %d",g);
   
}