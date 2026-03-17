#include <stdio.h>

#define MAX_CHAR 100




int read_line(char str[], int n);
void reverse(char *message);

int main(void)
{
    char message[MAX_CHAR + 1];
    printf("Enter a message: ");
    read_line(message, MAX_CHAR);
    reverse(message);
    printf("Reversal is: %s\n", message);
    return 0;
}

void reverse(char *message)
{
    char *p = message;
    char temp;

    while (*p)
        p++;
    --p;

    while (p > message)
    {
        temp = *p;
        *p-- = *message;
        *message++ = temp;
    }
}

int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0'; 
    return i;
}


