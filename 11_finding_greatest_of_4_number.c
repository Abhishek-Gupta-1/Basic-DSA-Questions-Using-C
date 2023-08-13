#include<stdio.h>
#include<math.h>

int main(){
    int num1,num2,num3,num4;
    printf("enter any four number by giving comma between those number : ");
    scanf("%d%d%d%d",num1,num2,num3,num4);

    if(num1>num2 && num1>num3 && num1>num4)
    {
        printf("the number which is greatest of all 4 number is : %d",num1);
    }
    else if(num2>num1 && num2>num3 && num2>num4)
    {
        printf("the number which is greatest of all 4 number is : %d",num1);
    }
     else if(num3>num2 && num3>num1 && num3>num4)
    {
        printf("the number which is greatest of all 4 number is : %d",num1);
    }
    else if(num4>num2 && num4>num3 && num4>num1)
    {
        printf("the number which is greatest of all 4 number is : %d",num1);
    }
    else
    {
        printf("Error : try to re enter the value");
    }
     return 0;
}