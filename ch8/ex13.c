#include <stdio.h>

int main(void) 
{
    char ch, initial, last_name[20];
    int i;

    printf("Enter a first and last name: ");
    scanf(" %c", &initial);

    while ((ch = getchar()) != ' ')
        ;

    while ((ch = getchar()) == ' ')
        ;

    do
    {
        last_name[i++] = ch;
    } while ((ch = getchar()) != '\n' && ch != ' ');
    for (int j = 0; j <= i; j++)
    {
        printf("%c", last_name[j]);
    }
    printf(", %c\n", initial);
    return 0;
}
