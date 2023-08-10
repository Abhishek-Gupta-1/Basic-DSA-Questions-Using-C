#include<stdio.h>
#include<math.h>
int main()
{
    /*this is the
    c program to find simple intrest*/
    int principal,rate,time;
    printf("value of principal is :  ");
    scanf("%d" , &principal);
    printf("value of rate is :  ");
    scanf("%d" , &rate);
    printf("value of time is :  ");
    scanf("%d" , &time);
    printf("the value of simple intrest is: %d ", principal*rate*time/100);
    return 0;
}