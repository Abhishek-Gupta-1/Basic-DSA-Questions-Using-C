#include<stdio.h>
#include<math.h>

int main()
{
    int rating;
     printf("Enter your rating from (1-5) : ");
     scanf("%d",&rating);
     switch (rating)
     {
     case 1:
        printf("Your rating is 1 or 2 star");
         break;
     case 2:
        printf("Your rating is 2 star");
         break;
     case 3:
        printf("Your rating is 3 star");
         break;
     case 4:
        printf("Your rating is  4 star");
         break;
     case 5:
        printf("Your rating is 5 star");
         break;
     default:
        printf("Your input is invalid");
         break;
     
     }
     return 0;
}