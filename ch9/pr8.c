#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);


int main(void)
{

    srand((unsigned) time(NULL));


    int wins = 0, losses = 0;
    bool result;
    char ch;
    do {
        result = play_game();
        if (result)
        {
            printf("You win!\n");
            wins++;
        }else
        {
            printf("You lose!\n");
            losses++;
        }
        printf("Play again?: ");
        scanf(" %c", &ch);

    } while (ch == 'Y' || ch == 'y');

    printf("Wins: %d\tLosses: %d\n", wins, losses);
    return 0;    
}

bool play_game(void) 
{
    int point;

    point = roll_dice();
     
    switch (point)
    {
        case 7: case 11:
            printf("You rolled: %d\n", point);
            return true;
        case 2: case 3: case 12:
            printf("You rolled: %d\n", point);
            return false;
        default:
            printf("You rolled: %d\n", point);
            printf("Your point is %d\n", point);
    }

    int result;
    for (;;)
    {
        result = roll_dice();
        printf("You rolled: %d\n", result );
        if (result == point ) return true;
        else if (result == 7) return false;
    }
}


int roll_dice(void){
    int dice1, dice2;
    dice1 = rand()%6 + 1;
    dice2 = rand()%6 + 1;
    return dice1+dice2;
}

