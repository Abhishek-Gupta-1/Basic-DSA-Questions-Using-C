#include<stdio.h>
#include<math.h>

int main(){
    int Temp;
     printf("Enter Temperature in Fahrenheit : ");
     scanf("%d",&Temp);
     printf("The temperature in Centigrade is : %f ",((Temp-32) * (0.555999999)));
     return 0;
}