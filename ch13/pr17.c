#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX_CHAR 100

bool is_palindrome(const char *message);

int main(void)
{
    char message[MAX_CHAR];
    printf("Enter a message: ");
    scanf("%s", message);
    if (is_palindrome(message))
        printf("Is palindrome\n");
    else
        printf("Is not palindrome\n");
}


bool is_palindrome(const char *message)
{
    const char *p = message, *q = message;
    while (*p)
        p++;
    p--;
    while (q < p)
    {
        if (toupper(*q++) != toupper(*p--))
        {
            return false;
        }
    }
    return true;

}
