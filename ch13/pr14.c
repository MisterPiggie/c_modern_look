#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

bool are_anagrams(const char *word1, const char *word2);
int read_line(char str[], int n);

int main(void)
{
    char word1[21], word2[21];
    printf("Enter first word: ");
    read_line(word1, 20);
    printf("Enter second word: ");
    read_line(word2, 20);
    if (are_anagrams(word1, word2)){
        printf("The words are anagrams\n");
        return 0;
    }
    printf("The words are not anagrams\n");
    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = toupper(ch);
    str[i] = '\0'; 
    return i;
}


bool are_anagrams(const char *word1, const char *word2)
{
    int alphabet[26] = {0};
    int i;
    while (*word1)
    {
        alphabet[*word1 - 'A']++;
        word1++;
    }
    while (*word2)
    {
        alphabet[*word2 - 'A']++;
        word2++;
    }


    for ( i = 0; i < 26; i++ )
    {
        if (alphabet[i] != 0)
            return false;
    }
    return true;
}


