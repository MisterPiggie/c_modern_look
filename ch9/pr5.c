#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
    int n;
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char magic_square[n][n];
    create_magic_square(n, magic_square); 
    print_magic_square(n, magic_square); 
}

void create_magic_square(int n, char magic_square[n][n]){
    int row = 0, col = n/2, i;
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

}

void print_magic_square(int n, char magic_square[n][n]){
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            printf("%4d", magic_square[row][col]);
        }
        printf("\n");
    }
}


