#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

int hand[NUM_CARDS][2];
bool straight, flush, four, three, royal;
int pairs;

void read_cards(void);
void analyze_hand(void);
void print_result(void);
bool card_exists(int rank, int suit, int card_number);

int main(void)
{
    for (;;)
    {
        read_cards();
        analyze_hand();
        print_result();
    }
}

void read_cards(void)
{
    char ch, rank_ch, suit_ch;
    int rank, suit, card_number = 0;
    bool bad_card;
    for (int i = 0; i < 5; i++)
        for ( int j = 0; j < 2; j++)
            hand[i][j] = 0;

    while (card_number < NUM_CARDS) 
    {
        bad_card = false;
        printf("Enter your card: ");
        rank_ch = getchar();
        switch (rank_ch) 
        {
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) 
        {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ') bad_card = true;

        if (bad_card)
            printf("Bad card; ignored\n");
        else if (card_exists(rank, suit, card_number))
            printf("Duplicate card; ignored\n");
        else {
            hand[card_number][0] = rank;
            hand[card_number][1] = suit;
            card_number++;
        }
    }
}


void analyze_hand(void)
{
    int i, j, temp_suit, temp_rank, matches, min_i;
    straight = false;
    royal = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    for (i = 1; i < NUM_CARDS; i++)
    {
        if (hand[0][1] != hand[i][1]) 
        {
            break;
        }
        if (i == NUM_CARDS-1)
            flush = true;
    }

    for (int i = 0; i < NUM_CARDS; i++)
    {
        min_i = i;
        for (int j = i+1 ; j < NUM_CARDS; j++)
        {
            if (hand[j][0] < hand[min_i][0]) min_i = j;
        }

        temp_rank = hand[i][0];
        temp_suit = hand[i][1];
        hand[i][0] = hand[min_i][0];
        hand[i][1] = hand[min_i][1];
        hand[min_i][0] = temp_rank;
        hand[min_i][1] = temp_suit;
    }

    
    for (i = 0; i < NUM_CARDS-1; i++)
    {
        
        if ((hand[i+1][0] - hand[i][0]) != 1)
        {
            break;
        }

        if (i == NUM_CARDS - 2)
        {
            if (hand[4][0] == 12)
            {
                royal = true;
            }
            straight = true;
        }
        

    }



    for (i = 0; i < NUM_CARDS; i++)
    {
        matches = 0;
        for (j = i+1; j < NUM_CARDS; j++)
        {
            if (hand[j][0] == hand[i][0]) matches++;
        }

        if (matches == 1) pairs++;
        if (matches == 2) three = true; 
        if (matches == 3) four = true; 
    }
}


void print_result(void)
{
    if (straight && flush && royal)  printf("Royal flush");
    else if (straight && flush)  printf("Staright flush");
    else if (four)          printf("Four of kind");
    else if (three &&
            pairs == 2)     printf("Full house");
    else if (flush)         printf("Flush");
    else if (straight)      printf("Straight");
    else if (three)         printf("Thee of a kind");
    else if (pairs == 2)    printf("Two pairs");
    else if (pairs == 1)    printf("Pair");
    else                    printf("High card");

    printf ("\n\n");
}


bool card_exists(int rank, int suit, int card_number)
{
    for (int i = 0; i < card_number; i++)
    {
        if (hand[i][0] == rank && hand[i][1] == suit)
            return true;
    }
    return false;
}
