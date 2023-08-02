#include <stdio.h>

int main() //Acc. to ASCII a-z = 97-122
{
    char ch;
    printf("Enter 1 character : ");
    scanf("%c", &ch);
    if (ch > 97 && ch < 122)
    {
        printf("Entered Character is in Lower Case");
    }
    else
    {
        printf("Entered Character is not in Lower case (maybe upper case) ");
    }

    return 0;
}