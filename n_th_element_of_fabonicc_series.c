 #include<stdio.h>
// fibonicc series :- 1,1,2,3,5,8,13,21,34,55
int fibonicc(int n);

int main()
{
    int n,z;
    printf("Enter value of n (for n' th element) : ");
    scanf("%d",&n);
    z=fibonicc(n);
    printf("The n'th Element of Fibonicc series is : %d",z);
    return 0;
}
int fibonicc(int n)
{
    if (n==1 || n==2)
    {
        return 1;
    }
    else
    {
    int x;
    x=fibonicc(n-1)+fibonicc(n-2);
    return x;
    }
}   