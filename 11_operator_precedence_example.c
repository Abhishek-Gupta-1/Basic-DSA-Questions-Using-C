#include<stdio.h>
#include<math.h>

int main()
{
     int x,y,z,k;
     printf("enter value of x,y,z,k :");
     scanf("%d%d%d%d",&x,&y,&z,&k);
     printf("the value of operation is %f",(3*x) / y -z+k);
     return 0;
}