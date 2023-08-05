#include<stdio.h>

int sum(int n);

int main()
{
    int n,k;
    printf("Enter Number :");
    scanf("%d",&n);
    k=sum(n);
    printf("Sum of digit of %d is %d",n,k);
    return 0;
}
int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    
    else
    {
     int k;
     k= (n%10) + sum(n/10);
     return k; 
    }
    
    
}