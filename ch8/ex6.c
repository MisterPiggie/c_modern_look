#include <ctype.h>
#include <stdio.h>
#define MAX 100
int main(void) 
{
    char ch, message[MAX] = {0};
    int i = 0;
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') 
    {
        message[i++] = ch;
        if (i > MAX) 
        {
            break;
        }
    }
    printf("In B1FF-speak: ");
    for (i = 0; i < MAX; i++) 
    {
        switch (ch = toupper(message[i])) 
        {
            case 'A': 
                printf("4");
                break;
            case 'B':
                printf("8");
                break;
            case 'E': 
                printf("3");
                break;
            case 'I':
                printf("1");
                break;
            case 'O': 
                printf("0");
                break;
            case 'S':
                printf("5");
                break;
            default:
                putchar(ch);
                break;
        }
    }
    printf("!!!!!!!!!!\n");
    return 0;
}
