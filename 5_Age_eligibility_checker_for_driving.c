#include<stdio.h>
int main()
{
    int age;
    printf("enter your age :");
    scanf("%d",&age);
    if(age>=18 && age<=50)
    {
        printf("You are eligible for driving");
    }
    else
    {
        printf("You are not eligible for driving");
    }
    return 0;

    
}