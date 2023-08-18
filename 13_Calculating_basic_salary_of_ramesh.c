#include<stdio.h>
#include<math.h>

int main(){
     /*we are calculating Gross Salary(GS) of Ramesh , BREAKING GS:-
     Dearness Allowance=40% of BS ,House Rent Allowance=20% OF BS */
     int BS;
     printf("What is the basic salary of Ramesh : ");
     scanf("%d",&BS);
     printf("Gross salary of Ramesh is : %d", BS+(BS*60/100));

     return 0;
}