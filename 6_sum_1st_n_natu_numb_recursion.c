#include<stdio.h>

int sum(int n);

int main()
{
    int n,s;
    printf("Sum upto which number : ");
    scanf("%d",&n);
    s=sum(n);
    printf("The sum of all natural num upto %d is %d",n,s);
    return 0;
}
int sum(int n)
{
    int s;
    if (n==1)
    {
        return 1;
    }
    else{
    s= n + sum(n-1);
    return s;
    }
}