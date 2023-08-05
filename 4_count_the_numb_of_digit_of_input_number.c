#include<stdio.h>

int count(long long int n);

int main()
{
    long long int n,k;
    printf("Enter Number :");
    scanf("%lld",&n);
    k=count(n);
    printf("No. of digit in %lld is %lld",n,k);
    return 0;
}
int count(long long int n)
{
    if (n<10 || n==0)
    {
    return 1;
    }
    else
    {
     long long int z;
     z = 1 + count(n/10);
     return z;
    }
    
    
}