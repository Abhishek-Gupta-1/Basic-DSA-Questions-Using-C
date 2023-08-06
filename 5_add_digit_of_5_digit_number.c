#include <stdio.h>
#include <math.h>

int main()
{
     int N;
     printf("Enter the 5 digit number : ");
     scanf("%d", &N);
     printf("Sum value of the 5 digit is %d", (N % 10) + ((N / 10) % 10) + ((N / 100) % 10) + ((N / 1000) % 10) + ((N / 10000) % 10));
     return 0;
}