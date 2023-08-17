#include <stdio.h>
#include <math.h>

int main()
{ /*New Income Tax Slab:
       Less than 5 Lakhs -> 0%
       5 Lakhs - 8 Lakhs -> 9%
       8 Lakhs - 10 Lakhs -> 15%
       Greater than 10 Lakhs -> 19% */

    int sallary; 
    float tax;
    printf("Enter your Anually Sallary in Rupees :");
    scanf("%d", &sallary);
    tax=sallary;
    switch (sallary / 100000)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        printf("Tax amount you paid is : 0 Rupees");
        break;
    case 5:
    case 6:
    case 7:
        printf("Tax amount you paid is  : %f Rupees",(tax*9) / 100);
        break;
    case 8:
    case 9:
        printf("Tax amount you paid is : %f Rupees", (tax*15) / 100);
        break;
    default:
        printf("Tax amount you paid is : %f Rupees",(tax*19) / 100);
        break;
    }
    return 0;
}
/*things I learn by this program is :-
1)SWITCH only take value in interger not in float or decimal
2)to get exact value(101 rupees 29 paise or in float form) multiplying integer(sallary*9/100) doesn't work so we make another varible which is tax in float to get
answer in float .
3)variable int sallary; for Switch function , and float tax for arithmetic operation to get value in decimal form.
4)Always remember int*int -> int
    and float*int -> float   
    int*float -> float */