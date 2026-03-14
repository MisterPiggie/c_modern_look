#include <stdio.h>

#define MAX_CHAR 100

int main(void)
{
    int i = 0, j = 0;
    char ch, message[MAX_CHAR];
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && i != MAX_CHAR)
    {
        message[i++] = ch;
    }
    i--;
    while (j < i)
    {
        if (message
            }
    printf("\n");
    return 0;
}
