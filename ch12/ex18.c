#include <ctype.h>
int evaluate_position (char board[8][8])
{
    int eval = 0, temp;
    char *p;

    for ( p = *board; p < (*board + 8 * 8); p++)
    {
        if (*p != ' ')
        {
            switch ( toupper(*p))
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
            if (*p < 97)
            {
                eval += temp;
            } else
            {
                eval -= temp;
            }
        }
    }
    return eval;
}
