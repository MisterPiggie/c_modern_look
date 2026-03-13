#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void generate_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void) 
{
    char a[10][10];
    generate_walk(a);
    print_array(a);
}

void print_array(char walk[10][10])
{
    int row, col;
    for (row = 0; row < 10; row++) 
    {
        for (col = 0; col < 10; col++)
        {
            printf(" %c ", walk[row][col]);
        }
        printf("\n");
    }
    return;
}


void generate_walk(char walk[10][10]){
    int row, col, letter, direction;
    srand( (unsigned) time(NULL));

    for (row = 0; row < 10; row++) 
    {
        for (col = 0; col < 10; col++)
        {
            walk[row][col] = '.';
        }
    }
    col = 0;
    row = 0;
    walk[row][col] = 'A';

    for (letter = 66; letter <= 90; letter++) {
        direction = rand() % 4;
        for (int attempts = 0; attempts < 4; attempts++) {
            int d = (attempts + direction) % 4;
            if ((d ==0) && (row - 1 >= 0) && (walk[row-1][col] == '.'))
            {
                walk[--row][col] = (char) letter;
                break;
            }
            if (( d == 1) && (row + 1 < 10) && (walk[row+1][col] == '.'))
            {
                walk[++row][col] = (char) letter;
                break;
            }
            if (( d == 2 ) && (col - 1 >= 0) && (walk[row][col - 1] == '.'))
            {
                walk[row][--col] = (char) letter;
                break;
            }
            if ((d == 3) && (col + 1 < 10) && (walk[row][col + 1] == '.'))
            {
                walk[row][++col] = (char) letter;
                break;
            }
            if (attempts == 3) 
            {
                return;
            }
        }
    }
}
