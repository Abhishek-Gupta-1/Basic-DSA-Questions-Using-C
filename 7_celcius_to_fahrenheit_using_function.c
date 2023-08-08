#include<stdio.h>

int celcius(int t);

int main()
{
    int t;
    printf("Enter temp in Celcius : ");
    scanf("%d",&t);
    celcius(t);
    return 0;
}
int celcius(int t)
{
    int x;
    x=(t*1.8) + 32;
    printf("Temp is Fahrenheit is : %d",x);
}