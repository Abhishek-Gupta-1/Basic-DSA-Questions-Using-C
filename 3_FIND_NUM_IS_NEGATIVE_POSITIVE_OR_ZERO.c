#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a;
     printf("Enter Any Number :");
     scanf("%d", &a);
     if (a<0)
     {
          printf("Your Number is Negative");
     }

     else if (a>0)
     {
          printf("Your Number is Positive");
     }
     else if (a==0)
     {
          printf("Your Number is Zero");
     }
     else {
          printf("Re-Enter Your Number");
     }

     return 0;
}