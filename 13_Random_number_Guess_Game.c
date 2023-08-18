#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    int number, times = 0, i = 1, G;   //G- Guess by user
    srand(time(0));
    number = rand() % 100 + 1;
    while (i)             //we don't need series of number we just wanted to repeat the code until our answer ,so i write i to make code alwys true
    {
        printf("So Guess the number (between 1-100) : ");
        scanf("%d", &G);
        times = times + i;      //we don't have to increment the value of "i" ,because every time code executes have equal to 1 timees
        if (G > 100 || G < 1)
        {
            printf("Error -> guess No. must be between 1-100\n");
        }

        else if (G == number)
        {
            printf("Your Guess is absolutely correct i.e : %d\n", number);
            printf("You Guess in : %d attempts", times);
            break;
        }
        else if (G < number)
        {
            printf("Higher number Please\n");
        }
        else if (G > number) 
        {
            printf("Lower number Please\n");
        }
        else
        {
            printf("Error 2");
        }
    }
    return 0;
}
