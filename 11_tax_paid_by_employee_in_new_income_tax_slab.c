#include <stdio.h>
#include <math.h>

int main()
{     /*New Income Tax Slab(in Rupees):-
       Less than 2.5 Lakhs -> 0%
       2.5 Lakhs - 5 Lakhs -> 5%
       5 Lakhs - 7.5 Lakhs -> 10%
       7.5 Lakhs -10 Lakhs -> 15%
       10 Lakhs - 12.5 Lakhs -> 20%
       12.5 Lakhs - 15 Lakhs -> 25%
       More than 15 Lakhs -> 30% */

    float sallary;
    printf("Enter your Anually Sallary in Rupees :");
    scanf("%f", &sallary);
    if (sallary <= 250000)
    {
        printf("Tax amount you have to paid is : 0 Rupees");
    }
    else if (sallary > 250000 && sallary <= 500000)
    {
        printf("Tax amount you have to paid is : %f Rupees", sallary / 20);
    }
    else if (sallary > 500000 && sallary <= 750000)
    {
        printf("Tax amount you have to paid is : %f Rupees", sallary / 10);
    }
    else if (sallary > 750000 && sallary <= 1000000)
    {
        printf("Tax amount you have to paid is : %f Rupees", sallary*15 / 100);
    }
    else if (sallary > 1000000 && sallary <= 1250000)
    {
        printf("Tax amount you have to paid is : %f Rupees", sallary / 5);
    }
    else if (sallary > 1250000 && sallary <= 1500000)
    {
        printf("Tax amount you have to paid is : %f Rupees", sallary / 4);
    }
    else if (sallary > 1500000)
    {
        printf("Tax amount you have to paid is : %f Rupees", sallary*30 / 100);
    }
    return 0;
}