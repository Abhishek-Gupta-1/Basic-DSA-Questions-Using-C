#include <stdio.h>
#include <math.h>

int main()
{
    float physics, chemistry, maths,a;

    printf("Enter marks obtained in Physics out of 100: ");
    scanf("%f", &physics);
    (physics <= 33) ? printf("You failed in Physics so overall you Fail \n") : printf("Pass\n");

    printf("Enter marks obtained in Chemistry out of 100 : ");
    scanf("%f", &chemistry);
    (chemistry <= 33) ? printf("You failed in chemistry so overall you Fail \n") : printf("Pass\n");

    printf("Enter marks obtained in Maths out of 100 : ");
    scanf("%f", &maths);
    (maths <= 33) ? printf("You failed in maths so overall you Fail \n") : printf("Pass \n");

    a = ((physics + chemistry + maths)/300*100);


    if(a >= 40)
    {
        printf("Congrat You Passed by : %f Percent", a);
    }
    else
    {
        printf("Sad But You Fail : %f Percent", a);
    }
    return 0;
}