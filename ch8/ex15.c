#include <stdio.h>


int main(void)
{
    char message[80], ch;
    int i, j = 0, shift;
    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n')
    {
        message[j++] = ch;
    }
    printf("Enter a shift amount :");
    scanf("%d", &shift);

    for (i = 0; i <= j; i ++) 
    {
        if (message[i] >= 'A' && message[i] <= 'Z') 
        {
            putchar(((message[i] - 'A') + shift) % 26 + 'A');
        } else if (message[i] >= 'a' && message[i] <= 'z')
        {
            putchar(((message[i] - 'a') + shift) % 26 + 'a');
        } else 
        {
            putchar(message[i]);
        }
    }

    printf("\n");
}
