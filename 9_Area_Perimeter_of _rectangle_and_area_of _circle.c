#include<stdio.h>
int main()
{
    int length,breadth,radius ;
    printf("what is the length of rectangle :");
    scanf("%d", &length);
    printf("what is the breadth of rectangle :");
    scanf("%d" , &breadth);
     printf("what is the radius of circle :");
    scanf("%d" , &radius);

    printf("the Area of rectangle is : %d \n ", length * breadth);
    printf("the Perimeter of rectangle is : %d \n" , 2*(length + breadth));
    printf("the Area of Circumference of Circle is : %f " ,radius*radius*3.14);
    return 0; 
}
