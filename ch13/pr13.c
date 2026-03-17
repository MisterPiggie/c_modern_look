#include <stdio.h>

void encrypt( char *message, int shift);

int main(void)
{
    char message[80], ch;
    int i = 0, shift;
    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n')
    {
        message[i++] = ch;
    }
    printf("Enter a shift amount :");
    scanf("%d", &shift);

    encrypt(message, shift);
    printf("%s\n", message);
}




void encrypt( char *message, int shift)
{
    while (*message != '\0')
    {
        if (*message >= 'A' && *message <= 'Z') 
        {
            *message = ((*message - 'A') + shift) % 26 + 'A';
        } else if (*message >= 'a' && *message <= 'z')
        {
            *message = ((*message - 'a') + shift) % 26 + 'a';
        } else 
        {
            *message = *message;
        }
        message++;
    }
}
