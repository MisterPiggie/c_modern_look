#include <stdio.h>

int main(void) 
{
    char ch, sentence[100] = {0}, terminate;
    int i, j;
    for (i = 0; (ch = getchar()) != '\n' && i < 100; i++)
    {
        if (ch == '!' || ch == '.' || ch == '?')
        {
            terminate = ch;
            break;
        }
        sentence[i] = ch;
    }

    printf("Reversal of sentence: ");
    while (i >= 0) {
        while (sentence[--i] != ' ' && i >= 0)
            ;
        j = i == 0 ? 0 : i + 1;
        while (sentence[j] != ' ' && sentence[j] != '\0')
            putchar(sentence[j++]);
        if ( i >= 0) 
        {
            putchar(' ');
        }
    }
    printf("\b%c\n", terminate);
    return 0;
}
