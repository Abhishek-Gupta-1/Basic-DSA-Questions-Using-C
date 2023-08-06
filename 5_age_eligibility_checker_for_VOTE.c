#include<stdio.h>
#include<math.h>

int main()
{
    int age;
     printf("Enter your age :");
     scanf("%d",&age);
     //shortcut
     (age>=18) ? printf("Your are eligible for voting") : printf("Your are not eligible for voting");
     return 0;
}