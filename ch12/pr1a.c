#include <stdio.h>

#define MAX_CHAR 100

int main(void)
{
    int i = 0;
    char ch, message[MAX_CHAR];
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && i != MAX_CHAR)
    {
        message[i++] = ch;
    }
    printf("Reversal is: ");

    for (i -= 1; i >= 0; i--)
    {
        printf("%c", message[i]);
    }
    printf("\n");
    return 0;
}
