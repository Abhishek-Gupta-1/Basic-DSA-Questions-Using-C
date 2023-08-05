#include<stdio.h>
#include<math.h>

int main(){
    int a ,k,i; 
    printf("Enter number which you wanted to repeat : ");
    scanf("%d",&a);
    printf("Number of Times : ");
    scanf("%d",&k);
    
    for ( i = 1; i <= k; i++)
    {
        printf("%d \n",a);
    }
    
    
    
     return 0;
}