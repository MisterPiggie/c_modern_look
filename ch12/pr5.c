#include <stdio.h>

int main(void) 
{
    char ch, sentence[100] = {0}, terminate;
    char *p = sentence, *q;
    while ((ch = getchar()) != '\n')
    {

        if (ch == '!' || ch == '.' || ch == '?')
        {
            terminate = ch;
            break;
        }
        *p++ = ch;
    }

    printf("Reversal of sentence: ");
    while (p >= sentence) {
        while (*--p != ' ' && p >= sentence)
            ;
        q = p == sentence ? sentence : p + 1;
        while (*q != ' ' && *q != '\0')
            putchar(*q++);
        if ( p > sentence) 
        {
            putchar(' ');
        }
    }
    printf("\b%c\n", terminate);
    return 0;
}
