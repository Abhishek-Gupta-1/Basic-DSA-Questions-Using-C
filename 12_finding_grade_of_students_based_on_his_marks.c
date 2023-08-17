#include <stdio.h>
#include <math.h>

int main()
{
    int marks;
    printf("Enter marks of student :");
    scanf("%d", &marks);
    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("Your grade is A");
        break;

    case 8:
        printf("Your grade is B");
        break;

    case 7:
        printf("Your grade is C");
        break;
    case 6:
        printf("Your grade is D");
        break;
    default:
        printf("Your grade is F");
        break;
    }
    return 0;
}