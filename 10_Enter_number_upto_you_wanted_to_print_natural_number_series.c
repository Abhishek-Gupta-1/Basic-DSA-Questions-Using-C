#include<stdio.h>
#include<math.h>

int main(){
    int a=1,b;
    printf("enter number upto you want to print number series : ");
    scanf("%d",&b);
    do
    {
        printf("%d \n",a);
        a++;
    } while (a<=b);
    
     return 0;
}