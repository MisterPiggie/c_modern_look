#include <stdio.h>

int main(void)
{
    int i, n;
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int magic_square[n][n], row, col;
    row = 0;
    col = n/2;

    for (row = 0; row < n; row++)
        for (col = 0; col < n; col++)
            magic_square[row][col] = 0;

    magic_square[row][col] = 1;
    for (i = 2; i <= n*n; i++) 
    {
        row = (row - 1 + n) % n;
        col = (col + 1) % n ;
        if (magic_square[row][col] != 0)
        {
            row = (row + 2) % n;
            col = (col - 1 + n) % n ;
        }
        magic_square[row][col] = i;
    }

    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            printf("%4d", magic_square[row][col]);
        }
        printf("\n");
    }
    
}
