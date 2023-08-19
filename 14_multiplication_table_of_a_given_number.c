// Multiplication table of a given number

#include<stdio.h>

int main(){
    int i,a;
    printf("Enter number for which you want the multiplication table:");
    scanf("%d",&i);

    // let say we want the multiplication table of 5

    // 5 X 1 = 5
    // 5 X 2 = 10

    printf("The multiplication table of %d are :- \n",i);
    
    for(a=1; a<=10 ; a++){
         printf(" %d X %d = %d \n",i,a,i*a );
    }
   
    return 0;

}