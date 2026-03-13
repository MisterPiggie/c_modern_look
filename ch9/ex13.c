

#include <ctype.h>
int evaluate_position (char board[8][8])
{
    int eval = 0, temp;
    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            if (board[row][col] != ' ')
            {
                switch ( toupper(board[row][col]))
                {
                    case 'Q':
                        temp = 9;
                    case 'R':
                        temp = 5;
                    case 'B': case 'N':
                        temp = 3;
                    case 'P':
                        temp = 1;
                }
                if (board[row][col] < 97)
                {
                    eval += temp;
                } else
                {
                    eval -= temp;
                }
            }
        }
    }
    return eval;
}
