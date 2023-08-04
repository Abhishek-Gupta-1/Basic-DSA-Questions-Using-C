#include <stdio.h>
#include <stdlib.h>

//CHALLENGE ACCEPTED
int main()
{
    int age, sex, Mstatus;
    printf("INVALID INPUT IS STRICTLY NOT ALLOWED \n");
    printf("Enter you age : ");
    scanf("%d", &age);

    printf("Enter your Marital status (For YES type '1'), (For NO type '0') :  ");
    scanf("%d", &Mstatus);

    printf("Enter your Sex (FOR MALE TYPE '1'), (FOR FEMALE TYPE '0'): ");
    scanf("%d", &sex);

    if (age < 18)
    {
        printf("You are  not Eligible to Drive as well as getting Insurance by our company(1)");
        
    }
    else if (Mstatus == 1)
    {
        printf("Congrat you are Eligible to get Insurance by our company(2)");
    }
    else if (sex == 1 && age > 30)
    {
        printf("Congrat you are Eligible to get Insurance by our company(3)");
    }
    else if (sex == 0 && age > 25)
    {
        printf("Congrat you are Eligible to get Insurance by our company(4)");
    }
    else
    {
        printf("You are not eligible to get Insurance (5)");
    }
    return 0;
}