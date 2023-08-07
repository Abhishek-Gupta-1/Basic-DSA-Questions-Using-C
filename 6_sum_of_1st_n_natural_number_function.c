#include<stdio.h>

int sum(int n);

int main()
{
    int z,n;
    printf("Enter n'th number upto which you want sum of : ");
    scanf("%d",&n);
    z = sum(n);
    printf("The Sum of all natural number upto %d is %d",n,z);
    

    return 0;
}
int sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    else{
    int x;
    x = n + sum(n-1);
    return x;
    }
}