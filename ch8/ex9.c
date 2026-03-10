#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) 
{
    char a[10][10];
    int row, col, letter, direction;
    srand( (unsigned) time(NULL));

    for (row = 0; row < 10; row++) 
    {
        for (col = 0; col < 10; col++)
        {
            a[row][col] = '.';
        }
    }
    col = 0;
    row = 0;
    a[row][col] = 'A';

    for (letter = 66; letter <= 90; letter++) {
        direction = rand() % 4;
        for (int attempts = 0; attempts < 4; attempts++) {
            int d = (attempts + direction) % 4;
            if ((d ==0) && (row - 1 >= 0) && (a[row-1][col] == '.'))
            {
                a[--row][col] = (char) letter;
                break;
            }
            if (( d == 1) && (row + 1 < 10) && (a[row+1][col] == '.'))
            {
                a[++row][col] = (char) letter;
                break;
            }
            if (( d == 2 ) && (col - 1 >= 0) && (a[row][col - 1] == '.'))
            {
                a[row][--col] = (char) letter;
                break;
            }
            if ((d == 3) && (col + 1 < 10) && (a[row][col + 1] == '.'))
            {
                a[row][++col] = (char) letter;
                break;
            }
            if (attempts == 3) 
            {
                for (row = 0; row < 10; row++) 
                {
                    for (col = 0; col < 10; col++)
                    {
                        printf(" %c ", a[row][col]);
                    }
                    printf("\n");
                }
                return 0;
            }


        }
    }
    for (row = 0; row < 10; row++) 
    {
        for (col = 0; col < 10; col++)
        {
            printf(" %c ", a[row][col]);
        }
        printf("\n");
    }
    return 0;
}
