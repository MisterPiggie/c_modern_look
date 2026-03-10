#include <ctype.h>
#include <stdio.h>


int main(void)
{
    char ch;
    int alphabet[26] = {0};
    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) 
        {
            alphabet[toupper(ch) - 'A'] += 1;
        }
    }
    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) 
        {
            alphabet[toupper(ch) - 'A'] -= 1;
        }
    }
    for (ch = 0; ch < 26; ch++)
    {
        if (alphabet[ch] != 0) 
        {
            printf("The words are not anagrams\n");
            return 0;
        }
        printf("The words are anagrams\n");
        return 0;
    }
}
