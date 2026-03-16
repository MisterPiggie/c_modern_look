#include <ctype.h>
#include <stdio.h>

#define MAX_CHAR 100

int main(void)
{
    char ch, message[MAX_CHAR];
    char *p = message, *q = message;
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && p != message + MAX_CHAR)
    {
        if (isalpha(ch))
            *p++ = toupper(ch);
    }
    p--;
    while (q < p)
    {
        if (*q++ != *p--)
        {
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}
