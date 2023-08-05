#include<stdio.h>
#include<math.h>
//this is a program to print natural number in reverse order starting with N
int main(){
    int i;
    printf("Enter the value N : ");
    scanf("%d",&i);
    for( i ; i; i--)
    {
        printf("natural number : %d \n",i);
    }
    
     return 0;
}