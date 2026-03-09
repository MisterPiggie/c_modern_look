#include <stdio.h>

int main(void) 
{
    char ch, initial;

    printf("Enter a first and last name: ");
    scanf(" %c", &initial);

    while ((ch = getchar()) != ' ')
        ;

    while ((ch = getchar()) == ' ')
        ;

    do
    {
        putchar(ch);
    } while ((ch = getchar()) != '\n' && ch != ' ');

    printf(", %c\n", initial);
    return 0;
}
