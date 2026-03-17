
#include <stdio.h>
#include <string.h>
#define WORD_LEN 20
char word[WORD_LEN+1], smallest_word[WORD_LEN+1], largest_word[WORD_LEN+1];

int main(void)
{
    printf("Enter word: ");
    scanf("%s", word);
    strcpy(smallest_word, word);
    strcpy(largest_word, word);
    do 
    {
        if (strcmp(smallest_word, word) > 0)
            strcpy(smallest_word, word);
        if (strcmp(largest_word, word) < 0)
            strcpy(largest_word, word);
        printf("Enter word: ");
        scanf("%s", word);
    } while (strlen(word) != 4);

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);
}

