#include <stdio.h>
#include <math.h> 

int main()
{
    int computer, person, m = 21, a; //m -> matchsticks
    printf("||||||||||||||||||||| ->Total 21 Matchstics\n");

        while(m>0)
        {
            printf("Pick matchsticks from 1 to 4 : ");
            scanf("%d", &person);
            m -= person;
            if (person > 4 || person < 1)
            {
                printf("Error PLEASE Re-Start Program \n");
                continue;
            }
            computer = 5 - person;
            printf("Computer choose : %d matchsticks\n", computer);
            m -= computer;
            printf("Matchsticks left : %d\n", m);

            if (m != 1)
            {
                continue;
            }
            else if (m == 1)
            {
                printf("Number of matchstic left : 1\n");
                printf("You Loose the game "); //Those who forced to pick last matchstick Loose the game
                break;
            }
        }
        
        
        

    return 0;
}