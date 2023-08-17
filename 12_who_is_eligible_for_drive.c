#include<stdio.h>
#include<math.h>

int main()
{
     int age;
     /*I am writing a code check weather anyone eligible for drive or not*/
     printf("Enter your age :");
     scanf("%d",&age);
     if(age>=18 && age<=50)
     {
        printf("You are eligible to drive");
     }

     else
     {
         printf("You are not eligible for drive");

    }
     
     return 0;
}