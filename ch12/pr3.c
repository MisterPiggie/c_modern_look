#include <stdio.h>

#define MAX_CHAR 100

int main(void)
{
    char *p, ch, message[MAX_CHAR];
    printf("Enter a message: ");
    p = message;
    while ((ch = getchar()) != '\n' && p < message + MAX_CHAR)
    {
        *p++ = ch;
    }
    printf("Reversal is: ");

    for (p -= 1; p >= message; p--)
    {
        printf("%c", *p);
    }
    printf("\n");
    return 0;
}
