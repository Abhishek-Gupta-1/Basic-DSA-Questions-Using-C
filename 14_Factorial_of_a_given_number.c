// I have to find the factorial of any input number by user 

#include<stdio.h>

    // For finding factorial we use recursion

    int factorial(int a);

    int main() {
    int i;
    printf("Enter the number: ");
    scanf("%d",&i);
    printf("The factorial of the given number is : %d", factorial(i) );
    return 0;  
    }
    

    int factorial(int i){
         int x;
         if(i==0){
         return 1;
         }
         else if(i<0){
            return 0;
         }
         else{
            x = i * factorial(i-1);
         }
        return x;
    }